#ifndef stack_h
#define stack_h
#define maxstack 100
#define stackentry int
 typedef struct stacknode{


 stackentry entry;
 struct stacknode *next;

 }StackNode;

 typedef struct stack{
 StackNode *top;
 int size;
 }Stack;
void CreateStack(Stack*);
void Push(stackentry, Stack*);
void Pop(stackentry*, Stack*);
int StackFull(Stack*);
int StackEmpty(Stack*);
int StackSize(Stack*);
void ClearStack(Stack*);
void TraverseStack(Stack*, void (*)(stackentry));
#endif
