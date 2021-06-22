#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "stack.h"

// Last-In First-Out

int main(void) {

    int choice;
    uint32_t capacity;
    stack_t *stack;
    
    system("clear");
    Menu();

    while(choice != 7) 
    {
        printf("Choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {
            case (CREATESTACK):
                capacity = 10;
                stack = createStack(capacity);
                break;
        
            case (PUSHSTACK):
                push(stack);
                break;
            
            case (POPSTACK):
                pop(stack);
                break;
            
            case (STACKTOP):
                printf("DANGER \n");
                //top(stack);
                break;
            
            case (PRINTSTACK):
                printStack(stack);
                break;
            
            case (FREESTACK):
                freeStack(stack);
                break;

            default:
                printf("Program end \n");
        }
    }


    return 0;
}