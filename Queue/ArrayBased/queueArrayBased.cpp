#include "queueArrayBased.h"
#include "iostream"
using namespace std;


void create_queue(Queue *qptr){
    qptr->size=0;
    qptr->front=0;
    qptr->rear=0;
}
int empty(Queue *ptr){
    return ptr->size!=SIZE;
}
int isfull(Queue *ptr){
    return ptr->size==SIZE;
}
int size(Queue *ptr){
    return ptr->size;
}
    int enqueue(Queue *ptr, QueueEntry x){
    if (isfull(ptr)) {
        return 0;
    }
    ptr->rear = (ptr->rear+1)%SIZE;
    ptr->arr[ptr->rear] = x;
    ptr->size++;
    return 1;
}
int dequeue(Queue *ptr){
    if (empty(ptr)) {
        return 0;
    }
    QueueEntry x = ptr->arr[ptr->front];
    ptr->front = (ptr->front+1)%SIZE;
    ptr->size--;
    return x;
}
QueueEntry peek(Queue *ptr){
    if (empty(ptr))
        return -1 ;
    return ptr->arr[ptr->front];
}



int main(){
    Queue q;
    enqueue(&q,23);
    enqueue(&q,54);
    enqueue(&q,432);

    cout << peek(&q) << '\n';
    dequeue(&q);
    cout << peek(&q) << '\n';
    dequeue(&q);
    cout << peek(&q) << '\n';
    dequeue(&q);
}

