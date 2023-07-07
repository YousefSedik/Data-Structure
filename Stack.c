//
// Created by Yousef A. Azeem on 7/7/2023.
//

#include "stdio.h"

const int MAXSIZE = 1000;
typedef struct stack{
    int top;
    int st[MAXSIZE];
}Stack;
void CreateStack(Stack *ps) {
    ps->top = 0 ;
}
int push(int value, Stack *pt) {
    if( pt->top == MAXSIZE) {
        return 0;
    }
    pt->st[pt->top++] = value;
    return 1;
}
void show(Stack *st) {
    for (int i = 0; i < st->top; i++) {
        printf("%i", st[i]);
    }
    printf("\n");
}

int main() {
    Stack st;
    CreateStack(&st);
    push(4, &st);
    push(54,&st);
    show(&st);
}