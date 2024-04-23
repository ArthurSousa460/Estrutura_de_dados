#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define MAX 10
typedef struct stack
{
    int top;
    int arr[MAX];
}stack;

stack* initializeStack();
int isEmpty(stack *sta);
int isFull(stack *sta);
void push(stack *sta, char value);
char pop(stack *sta);
int peek(stack *sta);

#endif 