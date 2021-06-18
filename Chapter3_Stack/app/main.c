#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "stack.h"


int main(void) {

    system("clear");

    printf("Stack size: %d bytes \n", sizeof(stack_t));

    uint32_t capacity = 10;

    stack_t *stack = createStack(capacity);

    
    for (uint32_t i = 0; i < stack->size-1; i++)
    {
        push(stack, i);
    }
    
    printStack(stack);

    printf("%f\n", top(stack));

    stack = freeStack(stack);


    return 0;
}
