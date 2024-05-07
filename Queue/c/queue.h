#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#define MAX 10
typedef struct queue{
    int end, init;
    int arr[MAX];
}queue;

queue* initializerQueue();
void enqueue(queue* q, int value);
int dequeue(queue* q);


#endif