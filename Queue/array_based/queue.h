#ifndef queue_h
#define queue_h
#define maxqueue 100
#define queue_entry int

typedef struct queue{
int front;
int rear;
int size;
queue_entry entry[maxqueue];

}Queue;

void CreateQueue(Queue *);
void Append(queue_entry  , Queue*);
void Serve(queue_entry *, Queue* );
int QueueEmpty(Queue* );
int QueueSize(Queue* );
void ClearQueue(Queue* );
void TraverseQueue(Queue* , void (*)(queue_entry));
#endif // queue_h
