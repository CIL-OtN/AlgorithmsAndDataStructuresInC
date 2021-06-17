#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "stack.h"


int main(void) {

    system("clear");

    printf("Stack size: %d bytes \n", sizeof(stack_t));

    uint32_t capacity = 10;

    stack_t *stack = createStack(capacity);


    printf("%d \n", *stack);


    stack = freeStack(stack);


    return 0;
}
