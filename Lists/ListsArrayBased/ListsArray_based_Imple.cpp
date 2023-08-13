//
// Created by YousefSedik on 8/10/2023.
//

#include "ListsArray_based_Imple.h"


void createlist(list *ptr){
    ptr->size = 0;
}
int size(list *ptr){
    return ptr->size;
}

int isfull(list *ptr){
    return ptr->size == MAXSIZE;
}
int isempty(list *ptr){
    return ptr->size != MAXSIZE;
}
void destroylist(list *ptr){
    ptr->size =0;
}
void insert_list(list *ptr, LISTENTRY data, int indx){
    for (int i = ptr->size -1 ; i>=indx ; i--) {
            ptr->entry[i+1] = ptr->entry[i] ;
    }
    ptr->entry[indx] = data;
    ptr->size++;
}
LISTENTRY delete_list(list *ptr, int indx){
    LISTENTRY da = ptr->entry[indx];
    for (int i = indx+1; i < ptr->size-1; i++) {
        ptr->entry[i-1] = ptr->entry[i] ;
    }
    ptr->size--;
    return da;
}

LISTENTRY RetriveList(list *ptr, int indx){
    return ptr->entry[indx];
}

void ReplaceList(list ptr, int indx, LISTENTRY value){
    ptr.entry[indx] = value;
}

void traverse_list(list *ptr, void *FUNC(LISTENTRY)){
    for (int i = 0; i < ptr->size; i++) {
        FUNC(ptr->entry[i]);
    }
}
