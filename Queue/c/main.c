#include<stdio.h>
#include "queue.h"

void main(){
    queue * q = initializerQueue();
    enqueue(q, 1);
    enqueue(q, 2);
    enqueue(q, 3);
    enqueue(q, 4);

    dequeue(q);


    printf("%i \n", q->arr[q->init]);
    printf("%i \n", q->arr[q->end]);

}