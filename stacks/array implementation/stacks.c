#include "stacks.h"

void CreateStack(Stack *ps)
{
    ps->top=0;
}



void Push(stackentry e, Stack *ps)
{
    ps->entry[ps->top++]=e;
}

void Pop(stackentry *pe, Stack *ps)
{
    *pe=ps->entry[--ps->top];
}


int StackFull(Stack *ps)
{
    return (ps->top==maxstack);
}
int StackEmpty(Stack *ps)
{
    return ps->top;
}
void StackTop(stackentry *pe ,Stack *ps)
{

    pe=ps->entry[ps->top-1];
}

int StackSize(Stack *ps)
{

    return ps->top;
}
void ClearStack(Stack *ps)
{

    ps->top=0;
}
void TraverseStack(Stack *ps, void (*pf)(stackentry))
{
    for(int i=ps->top; i>0; i--)
        (*pf)(ps->entry[i-1]);

}
