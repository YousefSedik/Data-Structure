//
// Created by YousefSedik on 7/30/2023.
//

#ifndef DS_QUEUELINKEDBASED_H
#define DS_QUEUELINKEDBASED_H

#define MAXSIZE 1000;
#define QUEUEENTRY int
struct Node{
    QUEUEENTRY data;
    Node *next;
};
typedef struct queue{
    int size;
    Node* rear;
    Node* front;
} Queue;


void create_queue(Queue *ptr);
int enqueu(Queue *ptr, QUEUEENTRY data);
QUEUEENTRY dequeue(Queue *ptr);
int isempty(Queue *ptr);
int isfull(Queue *ptr);
int size(Queue *ptr);
void clear_queue(Queue *ptr);
void travers(Queue*ptr, void *fun(QUEUEENTRY));
QUEUEENTRY peek(Queue *ptr);

#endif //DS_QUEUELINKEDBASED_H
