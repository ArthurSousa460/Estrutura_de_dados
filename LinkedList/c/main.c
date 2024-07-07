#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

void main(){
    LinkedList *li = initializerLinkedList();
    push(li, 1);

    printf("%d", li->head->value);

}