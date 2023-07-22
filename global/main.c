
#include <stdio.h>
#include "stacks.h"
void Display(StackEntry e)
{
	printf("%d ", e);
}
int main(){

Pstack s;
StackEntry e;
CreateStack(&s);
int x=5;
while(x--){
printf("enter an element to push into stack: ");
scanf("%d",&e);
Push(e,&s);
}
StackEntry pe;
Pop(&pe,&s);
StackTop(&pe,&s);
printf(" stack top = %d\n",pe);
printf(" \nstack size = %d\n",StackSize(&s));
TraverseStack(&s,&(Display));


 return 0;
}
