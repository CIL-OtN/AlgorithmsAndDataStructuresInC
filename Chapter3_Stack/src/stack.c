#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

stack_t *createStack(uint32_t capacity) 
{
    stack_t *stack = (stack_t *)malloc(sizeof(stack_t));  

    if(NULL == stack)
        return NULL;

    size_t data_size = capacity * sizeof(value_type_t);

    value_type_t *data = (value_type_t *)malloc(data_size); // example: with capacity of 10 is 10 x 4 byte float = 40 bytes

    if(NULL == data)
    {
        free(stack);
        return NULL;
    }

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
    }
}

bool isFull(stack_t *stack) 
{

}

bool isEmpty(stack_t *stack)
{
    
}

void push(stack_t *stack, value_type_t value)
{
    
}

value_type_t pop(stack_t *stack)
{
    
}

value_type_t top(stack_t *stack)
{
    
}

void printStack(stack_t *stack)
{
    
}