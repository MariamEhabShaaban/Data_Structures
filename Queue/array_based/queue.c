#include<stdio.h>
#include "queue.h"
void CreateQueue(Queue *pq){
pq->front=0;
pq->rear=-1;
pq->size=0;

}
void Append(queue_entry e , Queue* pq){

pq->rear = (pq->rear + 1) % maxqueue;
  pq->entry[pq->rear] = e;

pq->size++;


}
void Serve(queue_entry *pe, Queue *pq ){
*pe=pq->entry[pq->front];
pq->front=(pq->front+1)%maxqueue;
pq->size--;
}
int QueueEmpty(Queue* pq){

return !(pq->size);
}
int QueueSize(Queue* pq){
return (pq->size);
}
void ClearQueue(Queue* pq ){
pq->front=0;
pq->rear=-1;
pq->size=0;

}
void TraverseQueue(Queue* pq , void (*pf)(queue_entry)){

int pos, s;
	for(pos=pq->front, s=0; s<pq->size; s++){
		(*pf)(pq->entry[pos]);
		pos=(pos+1)%maxqueue;
	}


}
