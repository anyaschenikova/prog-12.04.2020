#ifndef STACK_H
#define STACK_H

#include "stdlib.h"

typedef struct stack
{
    char value;
    struct stack *pnext;
} STACK;

STACK *Push(STACK *phead, char v);

STACK *Pop(STACK *phead);

int IsEmpty(STACK *phead);

#endif