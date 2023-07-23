#include "global.h"
#define UNLIMITED_MEMORY
#ifdef UNLIMITED_MEMORY






typedef struct queuenode{
	QueueEntry entry;
	struct queuenode *next;
}QueueNode;

typedef struct queue{
	QueueNode *front;
	QueueNode *rear;
	int	size;
}Queue;

#else

typedef struct queue{
int front;
int rear;
int size;
QueueEntry entry[maxqueue];

}Queue;
#endif // UNLIMITED
void CreateQueue(Queue *);
int Append(QueueEntry  , Queue*);
void Serve(QueueEntry *, Queue* );
int QueueEmpty(Queue* );
int QueueSize(Queue* );
void ClearQueue(Queue* );
void TraverseQueue(Queue* , void (*)(QueueEntry));
