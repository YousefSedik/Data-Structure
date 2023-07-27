//
// Created by Yousef A. Azeem on 7/26/2023.
//

#ifndef DS_STACK_LINKED_IMPLE_H
#define DS_STACK_LINKED_IMPLE_H

#define Stack_Entry int

typedef struct stacknode{
    Stack_Entry entry;
    struct stacknode * next;
}StackNode;

typedef struct stack{
    StackNode *top;
    int size;
}Stack;

void CreateStack(Stack *s_ptr);
void  push(Stack *s_ptr, Stack_Entry data);
Stack_Entry pop(Stack *s_ptr);
int isempty(Stack *ptr);
int isfull(Stack *ptr) ;
void clear_stack(Stack *ptr);
void traverse_stack(Stack *ps, void (*pf)(Stack_Entry));
int stack_size(Stack *ps);


#endif //DS_STACK_LINKED_IMPLE_H
