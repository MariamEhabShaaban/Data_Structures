
#include <stdio.h>
#include "stacks.h"
#include "queue.h"
void Display(ElementType e)
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
printf(" emp %d\n",StackEmpty(&s));
printf(" full %d\n",StackFull(&s));
/*TraverseStack(&s,&Display);
ClearStack(&s);*/


Queue q;
QueueEntry c;
CreateQueue(&q);
int d=4;
while(d--){
printf("\n\n\n\nenter an element to push into queue: ");
scanf("%d",&c);
Append(c,&q);
}
printf("%d\n",QueueSize(&q));
Serve(&c,&q);
printf("%d",QueueSize(&q));
TraverseQueue(&q,&Display);



 return 0;
}
