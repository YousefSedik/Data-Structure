//
// Created by Yousef A. Azeem on 7/26/2023.
//
#include "Stack_Linked_Imple.h"
#include <bits/stdc++.h>
using namespace std;

void CreateStack(Stack *s_ptr){
    s_ptr->top = nullptr;
    s_ptr->size = 0;
}
void push(Stack *s_ptr, Stack_Entry data){
    StackNode * pn = (StackNode*) ::malloc(sizeof(Stack_Entry));
    pn->entry = data;
    pn->next = s_ptr->top;
    s_ptr->top = pn;
    s_ptr->size+=1;
}
Stack_Entry pop(Stack *s_ptr) {

    StackNode *new_node;
    Stack_Entry to_return ;
    to_return = (s_ptr->top->entry);
    new_node = s_ptr->top;
    s_ptr->top = s_ptr->top->next;
    free(new_node);
    s_ptr->size-=1;
    return to_return;

}
int isempty(Stack *ptr){
    return (ptr->top== nullptr);
}
int isfull(Stack *ptr) {
    return 0;
}
void clear_stack(Stack *ptr) {
    stacknode *st = ptr->top;
    while (st) {
        st = st->next;
        free(st);
        st = st->next;
    }
    ptr->size=0;
    ptr->top = nullptr;
}
void traverse_stack(Stack *ps, void (*pf)(Stack_Entry)) {
    stacknode *pn = ps->top;
    while (pn) {
        (*pf)(pn->entry);
        pn = pn->next;
    }
}
int stack_size(Stack *ps) {
    return ps->size;
}
int main() {
    Stack s;
    push(&s,12 );
    push(&s,15 );
    push(&s,163 );

    cout << stack_size(&s);

}
