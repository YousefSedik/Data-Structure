//
// Created by YousefSedik on 8/12/2023.
//

#ifndef DS_LISTSLINKEDBASED_H
#define DS_LISTSLINKEDBASED_H

#define LISTENTRY int
struct Node {
    LISTENTRY data;
    Node * next;
};
typedef struct list{
    struct Node * head ;
    int size;
}List;

void createlist(list *ptr);
int size(list *ptr);
int isfull(list *ptr);
int isempty(list *ptr);
void insert_list(list *ptr, LISTENTRY data, int indx);
LISTENTRY delete_list(list *ptr, int indx);
void traverse_list(list *ptr, void *FUNC(LISTENTRY));
void destroylist(list *ptr);
LISTENTRY RetriveList(list *ptr, int indx);
void ReplaceList(list *ptr, int indx, LISTENTRY value);
#endif //DS_LISTSLINKEDBASED_H
