//
// Created by YousefSedik on 7/30/2023.
//

#include "QueueLinkedBased.h"
#include "iostream"

using namespace std;
void create_queue(Queue *ptr){
    ptr->rear = NULL ;
    ptr->front = NULL;
    ptr->size =0 ;
}
int enqueu(Queue *ptr, QUEUEENTRY data) {
    Node *NewNode = (Node*)malloc(sizeof(QUEUEENTRY));
    if (!NewNode)
        return 0;
    NewNode->next = NULL;
    NewNode->data = data;
    if (!ptr->rear) {
        ptr->front = NewNode;
    }
    else {
        ptr->rear->next = NewNode;
    }
    ptr->rear= NewNode;
    ptr->size++;
    return 1;
}
QUEUEENTRY dequeue(Queue *ptr){
    Node *NewNode = ptr->front;
    QUEUEENTRY to_return = NewNode->data;
    ptr->front = ptr->front->next;
    free(NewNode);
    if (!ptr->front){
        ptr->rear = NULL;
    }
    ptr->size--;
}
int isempty(Queue *ptr){
    return !(ptr->size);
}
int isfull(Queue *ptr){
    return 0;
}
int size(Queue *ptr){
    return ptr->size ;
}
void clear_queue(Queue *ptr){
    while (ptr->front) {
        ptr->rear = ptr->front->next;
        free(ptr->front);
        ptr->front = ptr->rear;
    }
    ptr->size = 0;
}
void travers(Queue*ptr, void *fun(QUEUEENTRY)) {
    Node *ne = ptr->front;
    while (ne->next){
        fun(ne->data);
        ne = ne->next;
    }
    fun(ne->data);
    cout << '\n'; 
}
QUEUEENTRY peek(Queue *ptr){
    return ptr->front->data;
}
