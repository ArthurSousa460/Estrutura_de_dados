#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

typedef struct Node{
    int value;
    struct Node *next;
    
}Node;

typedef struct LinkedList{
    struct Node *head;
}LinkedList;


LinkedList * initializerLinkedList();
void push(LinkedList *li, int value);


#endif