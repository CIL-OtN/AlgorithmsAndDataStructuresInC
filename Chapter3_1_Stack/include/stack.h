#ifndef STACK_H_
#define STACK_H_


/**************/
/*  INCLUDES  */
/**************/

#include <math.h>
#include <stdint.h>
#include <stdbool.h>


/***********************/
/*  DEFINES AND TYPES  */
/***********************/

typedef float value_type_t;
#define NO_VALUE (value_type_t)INFINITY
typedef struct stack
{
    uint32_t        size;       // how much "blocks" are stored
    uint32_t        capacity;   // how much 
    value_type_t    *data;      // array in heap
} stack_t;

enum  
{
    CREATESTACK = 1,
    PUSHSTACK = 2,
    POPSTACK = 3,
    STACKTOP = 4,
    PRINTSTACK = 5,
    FREESTACK = 6
};

/***************/

/*  FUNCTIONS  */
/***************/

void Menu();

int Options(int choice);

stack_t *createStack(uint32_t capacity);

stack_t *freeStack(stack_t *stack);

bool isFull(stack_t *stack);

bool isEmpty(stack_t *stack);

void push(stack_t *stack);

value_type_t pop(stack_t *stack);

value_type_t top(stack_t *stack);

void printStack(stack_t *stack);



#endif  // STACK_H_