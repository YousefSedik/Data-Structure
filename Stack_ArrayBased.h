//
// Created by Yousef A. Azeem on 7/8/2023.
//
#ifndef STACK_ARRAYBASED_H
#define STACK_ARRAYBASED_H

#define MAXSIZE 1000
#define StackEntry int

#include <stdio.h>

typedef struct stack {
    int top;
    int stk[MAXSIZE];
} Stack;

void CreateStack(Stack* ps);
int isfull(Stack* pt);
int isempty(Stack* pt);
int push(StackEntry value, Stack* pt);
StackEntry top(Stack* pt);
StackEntry pop(Stack* pt);
int size(Stack pt);
void clear(Stack* pt);
void traverse(Stack* pt, void (*pf)(StackEntry));

#endif  // STACK_ARRAYBASED_H
