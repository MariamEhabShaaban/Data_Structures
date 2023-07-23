#ifndef STACK_H
#define STACK_H
#define StackEntry char
#define maxstack 100
typedef struct stack{
int top;
StackEntry entry[maxstack];
}Pstack;
#endif
