#ifndef STACK_H_
#define STACK_H_


/**************/
/*  INCLUDES  */
/**************/
#include <stdio.h>
#include <stdlib.h>


/***********************/
/*  DEFINES AND TYPES  */
/***********************/

#define maxNumElements 5

typedef struct 
{
    int top;
    int arr[maxNumElements];
} Stack;


/***************/
/*  FUNCTIONS  */
/***************/

Stack *createStack();
void push(Stack *stack, int value);
int pop(Stack *stack);
int top(Stack *stack);
void printStack(Stack *stack);
void freeStack(Stack *stack);


#endif  // STACK_H_