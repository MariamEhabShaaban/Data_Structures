//#ifndef STACK H
//#define STACK H
#include "global.h"
#define LINKED_BASED

#ifdef LINKED_BASED
typedef struct stack *Pstack;



#else
typedef struct stack{
int top;
StackEntry entry[maxstack];
}Pstack;


#endif

void CreateStack(Pstack *);
int Push(StackEntry ,Pstack *);
void Pop(StackEntry *,Pstack*);
int StackSize(Pstack *);
void StackTop(StackEntry *,Pstack*);
int StackFull(Pstack *);
int StackEmpty(Pstack *);
void TraverseStack(Pstack *,void(*)(StackEntry));
void ClearStack(Pstack *);












//#endif // STACK
