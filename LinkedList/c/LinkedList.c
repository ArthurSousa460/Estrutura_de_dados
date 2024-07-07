#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"


LinkedList* initializerLinkedList(){
    LinkedList *li = (LinkedList*) malloc(sizeof(LinkedList));
    if(li != NULL){
        return li;
    }
    
    
}

Node* createNode(int value){
    Node *no = (Node*) malloc(sizeof(Node));
    no->value = value;
    no->next = NULL;
    return no;
}

void push(LinkedList *li, int value){
    Node *newNode = createNode(value);
    if(li->head->next == NULL){
        li->head = newNode;
    }


}

