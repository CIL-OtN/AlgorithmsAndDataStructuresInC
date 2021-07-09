#include <stdio.h>
#include <stdlib.h>

#include "stack.h"


typedef int typedef_value_t;

typedef struct stack 
{   
    typedef_value_t data;
    struct stack* next;
} stack_t;

stack_t* head = NULL;

void push(typedef_value_t newValue) 
{
    stack_t* newNode = (stack_t*)malloc(sizeof(stack_t));

    newNode->data = newValue;
    newNode->next = head;
    head = newNode;
}

void pop() 
{
    stack_t* temp = head;

    if(head == NULL) 
    {
        printf("Stack is empty! \n");
    }
    else 
    {
        printf("Poped value: %d \n", head->data);
    
        temp = head;
        head = head->next;  // make head the second node

        free(temp);         // free former head
    }
}

void printStack() 
{
    if(head == NULL) 
    {
        printf("Stack is empty! \n");
    }

    while(head != NULL) 
    {
        printf("|    %d    | \n", head->data);
        head = head->next;
    }
}

int main(void) {

    system("clear");

    push(10);
    push(20);
    push(30);
    push(40);

    printStack(head);

    push(10);
    push(20);
    push(30);
    push(40);

    pop();    
    pop();    
        
    printStack(head);

    return 0;
}
