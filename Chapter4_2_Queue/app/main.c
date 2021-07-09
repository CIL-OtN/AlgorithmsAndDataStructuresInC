#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

typedef int typedef_value_t;

typedef struct queue 
{
    typedef_value_t data;
    struct queue* next;
} queue_t;

queue_t* front = NULL, *rear = NULL;

void printQueue() 
{
    while(front != NULL) 
    {
        printf("| %d | -> ", front->data);
        front = front->next;
    }
    printf("\n");
}

void enqueue(typedef_value_t newValue) 
{
    queue_t* newNode = (queue_t*)malloc(sizeof(queue_t));
    
    newNode->data = newValue;
    newNode->next = NULL;

    if(front == NULL && rear == NULL)   // if first node in queue
    {
        front = rear = newNode;
    }
    else 
    {
        rear->next = newNode;
        rear = newNode;
    }
}

void dequeue() 
{
    queue_t* temp;

    if(front == NULL) 
    {
        printf("Queue is empty. Unable to perform dequeue! \n");
    }
    else 
    {
        printf("Dequeue Element = %d \n", front->data);
    
        temp = front;
        front = front->next;

        if(front == NULL)
            rear = NULL;

        free(temp);
    }
}



int main(void) {

    system("clear");

    enqueue(10);
    enqueue(20);
    enqueue(30);
    
    dequeue();
    
    printQueue();

    return 0;
}
