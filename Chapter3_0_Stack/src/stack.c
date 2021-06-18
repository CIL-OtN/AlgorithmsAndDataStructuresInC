#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

Stack *createStack() 
{
    Stack *stack = malloc(sizeof(Stack));
    stack->top = -1;

    for(int i=0; i < maxNumElements; i++) 
    {
        stack->arr[i] = 0;
    }

    return stack;
}

void push(Stack *stack, int value) 
{
    if(stack->top == maxNumElements - 1) 
    {
        printf("Stack overflow \n");
    }
    else 
    {
        stack->top = stack->top + 1;
        stack->arr[stack->top] = value;
        printf("push %d \n", stack->arr[stack->top]);
    }
}

int pop(Stack *stack) 
{
    if(stack->top == -1) 
    {
        printf("Stack underflow \n");
        return -1;
    }
    else 
    {
        int temp = stack->arr[stack->top];
        stack->arr[stack->top] = 0;
        stack->top = stack->top - 1;
        
        printf("pop %d \n", temp);

        return temp;
    }
}

int top(Stack *stack) 
{
    if(stack->top == -1) 
    {
        printf("Stack empty \n");
    }
    else 
    {
        printf("Top index: %d <-> Top value: %d \n", stack->top, stack->arr[stack->top]);
        return stack->arr[stack->top];
    }
}

void printStack(Stack *stack) 
{
    printf("\n");
    for (int i = maxNumElements-1; i >= 0; i--)
    {
        printf("%d \n", stack->arr[i]);
    }

    printf("-----\n");
    top(stack);
}

void freeStack(Stack *stack) 
{
    while(stack->top != -1) 
    {
        pop(stack);
    }
    free(stack);
    printf("Stack deleted \n");
}