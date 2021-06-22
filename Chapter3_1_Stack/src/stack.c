#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


void Menu() 
{
    int choice;
 
    printf("1 -> Create a new stack \n");
    printf("2 -> Push a value to the stack \n");
    printf("3 -> Pop the top of the stack \n");
    printf("4 -> Print the top of the stack \n");
    printf("5 -> Print the whole stack \n");
    printf("6 -> Free stack \n");
    printf("7 -> End program \n");
    printf("-------------------------------\n");
    printf("\n");
}

stack_t *createStack(uint32_t capacity) 
{
    stack_t *stack = (stack_t *)malloc(sizeof(stack_t));  

    if(NULL == stack)
        return NULL;

    // reserve memory
	// int *example = (int *) malloc(size * sizeof(int));

    size_t data_size = capacity * sizeof(value_type_t);

    value_type_t *data = (value_type_t *)malloc(data_size); // example: with capacity of 10 is 10 x 4 byte float = 40 bytes

    if(NULL == data)
    {
        free(stack);
        return NULL;
    }

    system("clear");
    Menu();

    printf("Stack created with: \n");

    stack->size = 0u;
    stack->capacity = capacity;
    stack->data = data;
    
    return stack;
}

stack_t *freeStack(stack_t *stack)
{

    if(NULL != stack) 
    {
        if(NULL != stack->data)  
        {
            free(stack->data);
        }

        free(stack);
        printf("Stack is free!\n");
    }
    
    system("clear");
    Menu();
}

bool isFull(stack_t *stack) 
{
    return (stack->size == stack->capacity);
}

bool isEmpty(stack_t *stack)
{
    return (0u == stack->size);
}

void push(stack_t *stack)
{
    system("clear");
    Menu();
    
    value_type_t value;
    printf("Value: ");
    scanf("%f", &value);

    if(true == isFull(stack)) 
    {
        return;
    }

    stack->data[stack->size++] = value;

    printf("Push : %.2f \n", stack->data[stack->size -1]);
}

value_type_t pop(stack_t *stack)
{

    if(true==isEmpty(stack)) 
    {
        printf("Stack is empty! \n");
        return NO_VALUE;
    }

    printf("Pop : %.2f \n", stack->data[stack->size -1]);

    return stack->data[stack->size--];    
}

value_type_t top(stack_t *stack)
{
    if(true == isEmpty(stack)) 
    {
        printf("Stack is empty! \n"); 
        return NO_VALUE;   
    }

    printf("Top value of stack: %f \n", stack->data[stack->size - 1u]);
}

void printStack(stack_t *stack)
{
    if(NULL == stack) 
    {
        printf("Stack is empty! \n");
        return;
    }

    printf("\nStack contains %u elements with a capacity of %u. \n", stack->size, stack->capacity);

    for (int32_t i = stack->size - 1; i >= 0; i--)
    {
        printf("Index: %Fd, Value %.2f \n", i, stack->data[i]);
    }
    
}