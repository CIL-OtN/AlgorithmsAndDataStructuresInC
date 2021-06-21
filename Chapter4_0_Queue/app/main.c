#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

// First-In First-Out

#define maxNumElements 6

typedef struct {

    int arr[maxNumElements];
    int front;
    int back;
} Queue;

Queue *createQueue() 
{
    Queue *queue = (Queue*)malloc(sizeof(Queue));

    queue->front = 0;
    queue->back = 0;

    for (int i = 0; i < maxNumElements; i++)
    {
        queue->arr[i] = 0;
    }

    return queue;
}

void push(Queue *queue, int value) 
{
    queue->arr[queue->back] = value;

    if(queue->back == maxNumElements) 
    {
        queue->back = 0;
    }
    else 
    {
        printf("push %d \n", value);
        queue->back++;
    }
}

int pop(Queue *queue) 
{
    int value = queue->arr[queue->front];
    queue->arr[queue->front] = 0;

    if(queue->front == maxNumElements) 
    {
        queue->front = 0;
    }
    else 
    {
        queue->front++;
        printf("pop %d \n", value); 
    }

    return value;
}

void freeQueue(Queue *queue) 
{
    free(queue);
    printf("Queue is empty! \n");
}

void printQueue(Queue *queue) 
{
    printf("\n");
    for (int i = 0; i < maxNumElements; i++)
    {
        printf("%d ", queue->arr[i]);
    }
    printf("\n");

    printf("Front: %d <-> Back: %d \n", queue->arr[queue->front], queue->arr[queue->back-1]);
}



int main(void) {

    system("clear");

    Queue *queue = createQueue();

    printQueue(queue);

    push(queue, 1);
    push(queue, 2);
    push(queue, 3);
    push(queue, 4);
    push(queue, 8);

    printQueue(queue);

    pop(queue);
    pop(queue);
    
    printQueue(queue);
    freeQueue(queue);

    return 0;
}
