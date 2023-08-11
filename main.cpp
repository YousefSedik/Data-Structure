//
// Created by Yousef A. Azeem on 7/26/2023.
//
//#include "Stack/Stack_ArrayBased.h"
//#include "Stack/Stack_Linked_Imple.h"
#include <bits/stdc++.h>
#include "Queue/LinkedBased/QueueLinkedBased.h"
using namespace std;
void print(QUEUEENTRY x){
    cout << x<<' ' ;
}

int main() {
    Queue q;
    create_queue(&q);
    enqueu(&q,12);
    travers(&q, reinterpret_cast<void *(*)(int)>(print));
    enqueu(&q ,43);
    travers(&q, reinterpret_cast<void *(*)(int)>(print));
    enqueu(&q ,653);
    travers(&q, reinterpret_cast<void *(*)(int)>(print));
    enqueu(&q ,123);
    travers(&q, reinterpret_cast<void *(*)(int)>(print));
    dequeue(&q);
    travers(&q, reinterpret_cast<void *(*)(int)>(print));
    cout << peek(&q);
}
