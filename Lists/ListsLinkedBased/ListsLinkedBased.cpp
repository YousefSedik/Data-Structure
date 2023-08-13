//
// Created by YousefSedik on 8/12/2023.
//

#include "ListsLinkedBased.h"
#include "iostream"
void createlist(list *ptr){
    ptr->size=0;
    ptr->head = NULL;
}
int size(list *ptr){
    return ptr->size ;
}
int isfull(list *ptr){
    return 0;
}
int isempty(list *ptr){
    return ptr->size==0;
}
void insert_list(list *ptr, LISTENTRY data, int indx){
    Node *p , *q;
    p = (Node *) malloc(sizeof(Node));
    p->data = data;
    p->next = NULL;
    if (!indx) {
        p->next = ptr->head;
        ptr->head = p ;
    }
    else {
        q = ptr->head;
        for (int i = 0; i < ptr->size-1; i++) {
            q = q->next;
        }
        p->next = q->next ;
        q->next = p;
    }
    ptr->size++;
}
LISTENTRY delete_list(list *ptr, int indx){
    Node *q, *tmp;
    LISTENTRY to_be_returned;
    if (!indx) {
        to_be_returned = ptr->head->data ;
        tmp = ptr->head->next ;
        free(ptr->head);
        ptr->head = tmp;
    }
    else {
        q = ptr->head;
        for (int i = 0; i < ptr->size-1; i++) {
            q = q->next;
        }
        tmp = q->next ;
        to_be_returned = tmp->data;
        q->next = tmp->next;
        free(tmp);
        if (ptr->size == indx-1)
            q->next = NULL;
    }
    ptr->size -= 1;
    return to_be_returned;
}
void traverse_list(list *ptr, void *FUNC(LISTENTRY)) {
    Node *p = ptr->head;
    while (p) {
        FUNC(p->data);
        p = p->next;
    }
}
void destroylist(list *ptr){
    Node *pt;
    while (ptr->head) {
        pt = ptr->head->next;
        free(pt);
        ptr->head = pt;
    }
    ptr->size=0;
}
LISTENTRY RetriveList(list *ptr, int indx){
    Node *q = ptr->head;
    for (int i = 0; i < indx-1; i++) {
        q = q->next;
    }
    return q->data;
}
void ReplaceList(list *ptr, int indx, LISTENTRY value){
    Node *q = ptr->head;
    for (int i = 0; i < indx; i++) {
        q = q->next;
    }
    q->data = value;
}