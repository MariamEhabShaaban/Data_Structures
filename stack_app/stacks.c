#include "stacks.h"
#include<stdio.h>
#include<stdlib.h>

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

