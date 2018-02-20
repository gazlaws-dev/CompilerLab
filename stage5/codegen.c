int getLabel(){
	return label++;
}


int getReg(){
	if(tempreg>19) {
		printf("\nOut of registers\n");
		exit(0);
	}
	else {
		tempreg++;
		return tempreg-1;
	}
}

void saveReg(FILE *fp){
	int i=0;
	for(i=0;i<tempreg;i++){
		fprintf(fp,"PUSH R%d\n",i);
	}
	tempCount=tempreg;
}

void restoreReg(FILE *fp){
	//pop in reverse order of pushing
	int i;
	tempreg=tempCount;
	for(i=tempCount-1;i>=0;i--){
		fprintf(fp,"POP R%d\n",i);
	}
	
	tempCount=0;
}

void freeReg(){
	if(tempreg>0) {
		tempreg--;
	}
}

void freeAllReg(){
	tempreg=0;
}


int getLocReg(struct tnode* t,FILE *fp){
	
	int loc,reg;

	if(t->entry->isLoc==1){
		reg=getReg();
		loc = t->entry->localEntry->binding;	//1,2 3
		fprintf(fp,"MOV R%d, BP\n",reg);		//4xxx+1,2,3 (or -3,-4,-5)
		fprintf(fp,"ADD R%d, %d\n",reg,loc);
		//need to use loc+BP
			return reg;
	} else {
	loc = t->entry->globalEntry->binding;
		switch(t->nodetype){
			case tVAR:{ 
					int reg = getReg();
					fprintf(fp,"MOV R%d, %d\n",reg,loc);
					return reg;
			}
			default: fprintf(fp,"getLoc failed %d\n",t->nodetype);	
		}
	}

}

int codeGen(struct tnode* t,FILE *fp){
	int loc, reg,p,q;
	if(t==NULL) return -1;
	switch((t->nodetype)){
		case tFCALL:{
				struct tnode* arg = t->middle;
				
				saveReg(fp);
				freeAllReg();
				while(arg!=NULL){
					//arg n pushed first
					p = codeGen(arg,fp);
					fprintf(fp,"PUSH R%d\n",p);
					arg=arg->middle;
					}
				//one for return value	
				fprintf(fp,"PUSH R%d\n",p);
				
				fprintf(fp,"CALL F%d\n",t->entry->globalEntry->flabel);
				//SP points to Ret value
				freeAllReg();
				reg=tempCount+1;	//i know this won't be restored//atleast R1 here
				fprintf(fp,"POP R%d\n",reg);
				
				
				//pop those arguments
				arg = t->middle;
				while(arg!=NULL){
					fprintf(fp,"POP R0\n");
					arg=arg->middle;
				}
				restoreReg(fp);	
				
							
				return reg;	//return value is here
				
				}
				
		case tFUNC:{
				int label_1 = t->entry->globalEntry->flabel;
				int i=1,n=1;
				struct localEntry* le = t->entry->localTable->localEntry;
				struct globalEntry* gEntry = t->entry->globalEntry;	//to get argument list
				struct tnode* paramlist = gEntry->paramlist;
				
				if(strcmp(t->entry->localTable->funcName,"main")==0){
					fprintf(fp,"MAIN:\n");	
				} else
					{fprintf(fp,"F%d:\n", label_1);
					}				
				fprintf(fp,"PUSH BP\nMOV BP,SP\n");
				
				while((le!=NULL)&&(le->binding>0)){
					//only push those NOT arg, ie, not in paramlist
					fprintf(fp,"PUSH R0\n");
					le=le->next;
				}
				//body
				t->middle->entry=t->entry;
				//body
				codeGen(t->middle,fp);
				
				return -1;
				}
		case tBODY:{
				reg=getReg();
				//has slist and ret
				codeGen(t->left,fp);
				
				//ret needs to know lentry
				t->right->entry=t->entry;
				
				codeGen(t->right,fp);
				return -1;
					}
		case tRET:{
				reg=getReg();
				if(t->middle!=NULL && strcmp(t->entry->globalEntry->name,"main")!=0){
				
					p = codeGen(t->middle,fp);
				
					//pop local arg
					popLocalVar(t->entry,fp);
				
					//now put in BP-2
					fprintf(fp,"MOV R%d, BP\n",reg);
					fprintf(fp,"SUB R%d, 2\n",reg);
					
					fprintf(fp,"MOV [R%d], R%d\n",reg,p);
					fprintf(fp,"POP BP\n");
					fprintf(fp,"RET\n");
				} else if(strcmp(t->entry->globalEntry->name,"main")!=0){
					popLocalVar(t->entry,fp);
					fprintf(fp,"POP BP\n");
					fprintf(fp,"RET\n");
				}
				return -1;

			}
		case tLIT:
				reg = getReg();
				fprintf(fp,"MOV R%d, %s\n", reg, t->name);
				return reg;
		case tNUM:
				reg = getReg();
				fprintf(fp,"MOV R%d, %d\n", reg, t->val);
				return reg;
		case tVAR://gets the value in a reg
				reg = getReg();	//R2
				loc = getLocReg(t,fp);	//R3 = 4098
				fprintf(fp,"MOV R%d, [R%d]\n", reg, loc);	//MOV R2, [4098]
				return reg;
		case tBRKP: 
				fprintf(fp,"BRKP\n");
				return -1;
		case tREAD:
				loc =  getLocReg(t->right,fp);
				readCodeGen(loc,fp);
				return -1;
		case tWRITE:
				reg = codeGen(t->right,fp);
				writeCodeGen(reg,fp);
				return -1;
		case tCONNECT:
				codeGen(t->left,fp);
				freeAllReg();
				codeGen(t->right,fp);
				freeAllReg();
				return -1;
				
		case tASSIGN:
				reg = codeGen(t->right,fp);
				loc = getLocReg(t->left,fp);
				fprintf(fp,"MOV [R%d], R%d\n", loc, reg);
				return -1;
		case tIF:{
			int label_1 = getLabel();
			int label_2 = getLabel();
			p=codeGen(t->left,fp);	//the expr eval is here
			fprintf(fp,"JZ R%d, L%d\n", p, label_1); // GOTO ELSE
			codeGen(t->middle,fp);
			if(t->right==NULL){
				fprintf(fp,"L%d:\n", label_1);
				return -1;
			}else{
			fprintf(fp,"JMP L%d\n", label_2);
			//ELSE
			fprintf(fp,"L%d:\n", label_1);			
			codeGen(t->right,fp);
			fprintf(fp,"L%d:\n", label_2);}
			return -1;
			}
		case tWHILE:{
			int label_1 = getLabel();
			int label_2 = getLabel();
			fprintf(fp,"L%d:\n", label_1); // Place the first label here.
			p=codeGen(t->left,fp);
			fprintf(fp,"JZ R%d, L%d\n", p, label_2);//if zero, jump to label_2 // loop exit
			push(&breakstack,label_2);
			push(&contstack,label_1);
			codeGen(t->right,fp);
			printf( "JMP L%d\n", label_1); // return to the beginning of the loop.
			printf( "L%d:\n", label_2); 	// Place the second label here
			return -1;
			}
		case tBREAK:{
			printf( "JMP L%d\n", pop(&breakstack));
			pop(&contstack);
			return -1;
		}
		case tCONTINUE:{
			printf( "JMP L%d\n", pop(&contstack));
			return -1;
		}
		default:
			reg = codeGen(t->left, fp);
			loc = codeGen(t->right, fp);	//can free this
			switch (t->nodetype){
				case tADD:
					fprintf(fp,"ADD R%d, R%d\n",reg,loc);
					break;
				case tSUB:
					fprintf(fp,"SUB R%d, R%d\n",reg,loc);
					break;
				case tMUL:
					printf("MUL R%d, R%d\n",reg,loc);
					fprintf(fp,"MUL R%d, R%d\n",reg,loc);
					break;
				case tDIV:
					fprintf(fp,"DIV R%d, R%d\n",reg,loc);
					break;
				case tLT:
					fprintf(fp,"LT R%d, R%d\n",reg,loc);
					break;
				case tGT:
					fprintf(fp,"GT R%d, R%d\n",reg,loc);
					break;
				case tLE:
					fprintf(fp,"LE R%d, R%d\n",reg,loc);
					break;
				case tGE:
					fprintf(fp,"GE R%d, R%d\n",reg,loc);
					break;
				case tEQ:
					fprintf(fp,"EQ R%d, R%d\n",reg,loc);
					break;
				case tNE:
					fprintf(fp,"NE R%d, R%d\n",reg,loc);
					break;
				
			}
			freeReg();
			return reg;
		}
	
}


void popLocalVar(struct tableEntry* entry,FILE *fp){
	struct localTable* localTable = entry->localTable;
	struct localEntry* currEntry = localTable->localEntry;
	int temp = getReg();
	
	while(currEntry!=NULL && currEntry->binding>0){
		fprintf(fp,"POP R%d\n",temp);
		currEntry=currEntry->next;
	}
	freeReg();
}

void readCodeGen(int location, FILE *fp){
	int temp = getReg();
	fprintf(fp,"MOV R%d, \"Read\"\n",temp);
	fprintf(fp,"PUSH R%d\n",temp);
	fprintf(fp,"MOV R%d, -1\n",temp);
	fprintf(fp,"PUSH R%d\n",temp);
	fprintf(fp,"MOV R%d, R%d\n",temp,location);
	fprintf(fp,"PUSH R%d\n",temp);
	fprintf(fp,"PUSH R0\nPUSH R0\nCALL 0\nPOP R%d\nPOP R%d\nPOP R%d\nPOP R%d\nPOP R%d\n",temp,temp,temp,temp,temp);
	//return val - success/fail in Rtemp?
	freeReg();
}

void writeCodeGen(int reg, FILE *fp){
	int temp = getReg();
	//issue with lib
	fprintf(fp,"PUSH R0\nMOV R0,R%d\n",reg);
	fprintf(fp,"MOV R%d, \"Write\"\nPUSH R%d\nMOV R%d, -2\nPUSH R%d\nPUSH R%d\nPUSH R0\nPUSH R0\nCALL 0\nPOP R%d\nPOP R%d\nPOP R%d\nPOP R%d\nPOP R%d\n",temp,temp,temp,temp,0,temp,temp,temp,temp,temp);
	//return val - success/fail in Rtemp?
	fprintf(fp,"POP R0\n",reg);
	freeReg();
}


