#include<stdio.h>
#include "queue.h"
#include<stdlib.h>

queue * initializerQueue(){
    queue * q = (queue*) malloc(sizeof(queue));
    q->init = 0;
    q->end = -1;
}


void enqueue(queue * q, int value){
    if(q->end == MAX - 1){
        printf("queue is full");
    }
    q->end ++;
    q->arr[q->end] = value;
}

int dequeue(queue* q){
    if(q->end == -1){
        printf("Queue is empty");
        return 0;
    }
    int temp = q->arr[q->init];
    for(int i = 0; i < q->end - 1; i++){
        q->arr[i] = q->arr[i + 1];
    }
    return temp;
}