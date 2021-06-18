#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

// Last-In First-Out


int main(void) {

    system("clear");

    Stack *stack = createStack();

    printStack(stack);

    pop(stack);

    push(stack, 2);
    push(stack, 4);
    push(stack, 6);
    push(stack, 8);
    push(stack, 10);

    printStack(stack);

    pop(stack);
    pop(stack);
    
    printStack(stack);

    freeStack(stack);

    return 0;
}
