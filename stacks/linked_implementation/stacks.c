#include "stacks.h"
#include <stdio.h>
void CreateStack(Stack *ps)
{
    ps->top=NULL;
    ps->size=0;
}



void Push(stackentry e, Stack *ps)
{
    StackNode *pn=(StackNode*)malloc(sizeof(StackNode));
   pn->entry=e;
   pn->next=ps->top;
   ps->top=pn;
   ps->size++;
}

void Pop(stackentry *pe, Stack *ps)
{
    StackNode *pn;
    *pe=ps->top->entry;
    pn=ps->top;
    ps->top=ps->top->next;
    free(pn);
    ps->size--;
}


int StackFull(Stack *ps)
{
    return 0;
}
int StackEmpty(Stack *ps)
{
    return ps->top==NULL;
}

int StackSize(Stack *ps)
{

    return ps->size;
}
void ClearStack(Stack *ps)
{

    StackNode *pn=ps->top;
    while(pn){
        pn=pn->next;
        free(ps->top);
        ps->top=pn;
        ps->size=0;

    }
}
void TraverseStack(Stack *ps, void (*pf)(stackentry))
{
   StackNode *pn=ps->top;
   while(pn){
    (*pf)(pn->entry);
    pn=pn->next;
   }

}
