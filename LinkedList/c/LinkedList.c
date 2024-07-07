#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"


LinkedList* initializerLinkedList(){
    LinkedList *li = (LinkedList*) malloc(sizeof(LinkedList));
    if(li != NULL){
        li->head = NULL;
    }
    return li;
    
    
}


void push(LinkedList *li, int value){
    Node *newNode = (Node*) malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = NULL;
    if(li->head == NULL){
        li->head = newNode;
    }else{
        Node *pointer = (Node*) malloc(sizeof(Node));
        while (pointer->next != NULL){
            pointer = pointer->next;
        }
        pointer->next = newNode;
    }


}

