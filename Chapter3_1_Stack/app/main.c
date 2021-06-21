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
    push(stack, 2.0f);
    push(stack, 3.0f);
    push(stack, 4.0f);
    push(stack, 5.0f);

    pop(stack);
    pop(stack);
    pop(stack);

    printStack(stack);

    printf("\nTop value of stack is: %f", top(stack));

    stack = freeStack(stack);

    return 0;
}
