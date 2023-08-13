//
// Created by Yousef A. Azeem on 7/26/2023.
//

#include <bits/stdc++.h>
#include "Lists/ListsArrayBased/ListsArray_based_Imple.h"
using namespace std;

void print(LISTENTRY x){
    cout << x<<' ' ;
}

int main() {
    List l;
    createlist(&l);
    cout << size(&l) << '\n';
    insert_list(&l,23,0); // 2433 232 23 12
    cout << size(&l) << '\n';
    insert_list(&l,232,0);
    insert_list(&l,2433,0);
    cout << size(&l) << '\n';
    insert_list(&l,12,2);
    traverse_list(&l, reinterpret_cast<void *(*)(int)>(print));
    cout << '\n';
    delete_list(&l, 1);
    traverse_list(&l, reinterpret_cast<void *(*)(int)>(print));
    cout << '\n';

//    Queue q;
//    create_queue(&q);
//    enqueu(&q,12);
//    travers(&q, reinterpret_cast<void *(*)(int)>(print));
//    enqueu(&q ,43);
//    travers(&q, reinterpret_cast<void *(*)(int)>(print));
//    enqueu(&q ,653);
//    travers(&q, reinterpret_cast<void *(*)(int)>(print));
//    enqueu(&q ,123);
//    travers(&q, reinterpret_cast<void *(*)(int)>(print));
//    dequeue(&q);
//    travers(&q, reinterpret_cast<void *(*)(int)>(print));
//    cout << peek(&q);
}
