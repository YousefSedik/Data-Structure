//
// Created by Yousef A. Azeem on 7/7/2023.
//

#include "Stack_ArrayBased.h"
#include <stdio.h>

void CreateStack(Stack* ps) {
    ps->top = 0;
}

int isfull(Stack* pt) {
    return pt->top == MAXSIZE;
}

int isempty(Stack* pt) {
    return pt->top == 0;
}

int push( Stack* pt, StackEntry value) {
    if (isfull(pt))
        return 0;

    pt->stk[pt->top++] = value;
    return 1;
}

StackEntry top(Stack* pt) {
    if (isempty(pt))
        return 0;
    return pt->stk[pt->top - 1];
}

StackEntry pop(Stack* pt) {
    if (isempty(pt))
        return 0;

    return pt->stk[--pt->top];
}

int size(Stack pt) {
    return pt.top;
}

void clear(Stack* pt) {
    pt->top = 0;
}

void traverse(Stack* pt, void (*pf)(StackEntry)) {
    for (int i = pt->top - 1; i >= 0; i--) {
        (*pf)(pt->stk[i]);
    }
    printf("\n");
}

void pr(StackEntry ele) {
    printf("%d \n", ele);
}
