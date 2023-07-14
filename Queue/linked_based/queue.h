#ifndef queue_h
#define queue_h
#define queue_entry int

typedef struct queuenode{
	queue_entry entry;
	struct queuenode *next;
}QueueNode;

typedef struct queue{
	QueueNode *front;
	QueueNode *rear;
	int	size;
}Queue;


void CreateQueue(Queue *);
int Append(queue_entry  , Queue*);
void Serve(queue_entry *, Queue* );
int QueueEmpty(Queue* );
int QueueSize(Queue* );
void ClearQueue(Queue* );
void TraverseQueue(Queue* , void (*)(queue_entry));
#endif // queue_h
