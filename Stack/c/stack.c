#include<stdio.h>
#include<stdlib.h>
#include "stack.h"


stack* initializeStack(){
    stack *sta = (stack*) malloc(sizeof(stack));
    sta->top = -1;
    return sta;
}


int isFull(stack *sta){
    if(sta->top == MAX - 1)
        return 1;
    else
        return 0;
    
}


int isEmpty(stack *sta){
    if(sta->top == -1)
        return 1;
    else
        return 0;
}


void push(stack *sta, char value){
    if(isFull(sta) != 1){
        sta->top++;
        sta->arr[sta->top] = value;
    }else{
        printf("Stack is full");
    }
}

char pop(stack *sta){
    int temp;
    if(isEmpty(sta) != 1){
        temp = sta->arr[sta->top];
        sta->top--;
        return temp;
    }else{
        printf("Stack is empty");
    }
}

int peek(stack *sta){
    if(isEmpty(sta) != 1){
        return sta->arr[sta->top];
    }
}
