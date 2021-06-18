#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "stack.h"

// Last-In First-Out

int main(void) {

    system("clear");

    uint32_t capacity = 10;

    stack_t *stack = createStack(capacity);

    push(stack, 1.0f);

    push(stack, 3.0f);

    push(stack, 5.0f);

    push(stack, 7.0f);

    push(stack, 9.0f);

    pop(stack);

    printf("Stack size: %d bytes \n", sizeof(stack_t));

    printStack(stack);

    printf("Top value of stack is: %f", top(stack));

    stack = freeStack(stack);


    return 0;
}
