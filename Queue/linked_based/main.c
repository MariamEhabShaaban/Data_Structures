
#include <stdio.h>
#include "queue.h"
void Display(queue_entry e)
{
	printf("%d ", e);
}
int main(){

Queue q;
queue_entry e;
CreateQueue(&q);
e=5;
Append(e,&q);
Append(e,&q);
printf("%d\n",QueueSize(&q));
//Serve(&e,&q);
//printf("%d",QueueSize(&q));
TraverseQueue(&q,&Display);
 return 0;
}
