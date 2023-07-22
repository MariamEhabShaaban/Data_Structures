#include <stdio.h>
#include "stacks.h"
#ifdef LINKED_BASED

typedef struct stacknode{
StackEntry entry;
struct stacknode *next;
}StackNode;
typedef struct stack{
StackNode *top;
int size;

}Stack;


void CreateStack(Pstack *ps){
(*ps)->top==NULL;
(*ps)->size=0;


}
int Push(StackEntry e,Pstack *ps){
StackNode *pn=(StackNode *)malloc(sizeof(StackNode));
if(!pn)
    return 0;
else{
pn->entry=e;
pn->next=(*ps)->top;
(*ps)->top=pn;
(*ps)->size++;
return 1;
}
}
void Pop(StackEntry *pe,Pstack *ps){
StackEntry *pn;
*pe=(*ps)->top->entry;
pn=(*ps)->top;
(*ps)->top=(*ps)->top->next;
free(pn);
(*ps)->size--;
}
int StackSize(Pstack* ps){
return (*ps)->size;

}
int StackFull(Pstack *ps){
return  0;
}
int StackEmpty(Pstack *ps){
return ((*ps)->top==NULL);
}
void StackTop(StackEntry *pe,Pstack *ps){

*pe=(*ps)->top->entry;
}
void ClearStack(Pstack *ps){
StackNode *pn;
pn=(*ps)->top;
while(pn){
    pn=pn->next;
    free((*ps)->top);
    (*ps)->top=pn;
}
(*ps)->size=0;



}
void TraverseStack(Pstack *ps,void(*pf)(StackEntry)){
for( StackNode *pn=(*ps)->top;pn;pn=pn->next)
    (*pf)(pn->entry);

}





#else
void CreateStack(Pstack *ps){

ps->top=0;

}
int Push(StackEntry e,Pstack *ps){
if(!StackFull(&ps)){
ps->entry[ps->top++]=e;
return 1;
}
else
    return 0;
}
void Pop(StackEntry *pe,Pstack *ps){
*pe=ps->entry[--ps->top];

}
int StackSize(Pstack* ps){
return ps->top;

}
int StackFull(Pstack *ps){
return  (ps->top==maxstack);
}
int StackEmpty(Pstack *ps){
return (ps->top==0);
}
void StackTop(StackEntry *pe,Pstack *ps){

*pe=ps->entry[ps->top-1];
}
void TraverseStack(Pstack *ps,void(*pf)(StackEntry)){
for( int i=ps->top;i>0;i--)
    (*pf)(ps->entry[i-1]);

}



#endif // LINKED_BASED

