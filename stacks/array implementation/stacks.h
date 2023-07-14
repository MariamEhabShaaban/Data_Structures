#ifndef stack_h
#define stack_h
#define maxstack 100
#define stackentry int
 typedef struct stack{

 int top;
 stackentry entry [maxstack];

 }Stack;
void CreateStack(Stack*);
void Push(stackentry, Stack*);
void Pop(stackentry*, Stack*);
int StackFull(Stack*);
int StackEmpty(Stack*);
void StackTop(stackentry* , Stack* );
int StackSize(Stack*);
void ClearStack(Stack*);
void TraverseStack(Stack*, void (*)(stackentry));
#endif
