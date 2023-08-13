//
// Created by Yousef A. Azeem on 7/8/2023.
//
#ifndef ARR
#define ARR
#define MAXSIZE 1000
#define StackEntry int

#include <stdio.h>

typedef struct stack {
    int top=0;
    int stk[MAXSIZE];
} Stack;

void CreateStack(Stack* ps);
int isfull(Stack* pt);
int isempty(Stack* pt);
int push( Stack* pt, StackEntry value);
StackEntry top(Stack* pt);
StackEntry pop(Stack* pt);
int size(Stack pt);
void clear(Stack* pt);
void traverse(Stack* pt, void (*pf)(StackEntry));

#endif //ARR
