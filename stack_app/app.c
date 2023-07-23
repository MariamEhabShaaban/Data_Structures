#include"app.h"


void InfixToPostfix(char infix[], char postfix[]){
   int i, j;
char op, c;
Pstack s;
CreateStack(&s);
for(i=0, j=0; (c=infix[i])!='\0'; i++)
	if(IsDigit(c))
	   postfix[j++]=c;
	else{
	   if(!StackEmpty(&s)){
	      StackTop(&op, &s);
	      while(!StackEmpty(&s) && Precedent(op, c)){
		   Pop(&op, &s);
		   postfix[j++]=op;
		   if(!StackEmpty(&s)) StackTop(&op, &s);
	      }
	   }
	   Push(c, &s);
	}
while(!StackEmpty(&s)){
	Pop(&op, &s);
	postfix[j++]=op;
}
postfix[j]='\0';
}
int IsDigit(char c){
   return(c>='0' && c<='9');
}
int Precedent(char op1, char op2){
   if (op1=='$') return 1;

   if ((op1=='*') || (op1=='/'))
	return (op2!='$');

   if ((op1=='+') || (op1=='-'))
      return ( (op2!='$')&&(op2!='*')&&(op2!='/') );

   return 0;
}


