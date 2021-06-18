#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

queue_t *createQueue(uint32_t capacity) 
{
    queue_t *queue = (queue_t *)malloc(sizeof(queue_t));  

    if(NULL == queue)
        return NULL;

    size_t data_size = capacity * sizeof(value_type_t);

    value_type_t *data = (value_type_t *)malloc(data_size); // example: with capacity of 10 is 10 x 4 byte float = 40 bytes

    if(NULL == data)
    {
        free(queue);
        return NULL;
    }

    queue->front_idx = 0u;
    queue->back_idx = capacity - 1u;
    queue->size = 0u;
    queue->capacity = capacity;
    queue->data = data;
    
    return queue;
}

queue_t *freeQueue(queue_t *queue)
{
    if(NULL != queue) 
    {
        if(NULL != queue->data)  
        {
            free(queue->data);
        }

        free(queue);
    }
}

bool isFull(queue_t *queue) 
{
    return (queue->size == queue->capacity);
}

bool isEmpty(queue_t *queue)
{
    return (0u == queue->size);
}

void push(queue_t *queue, value_type_t value)
{
    if(true == isFull(queue)) 
    {
        return;
    }

    queue->back_idx = (queue->back_idx + 1) % queue->capacity;

    queue->data[queue->size] = value;

    queue->size++;
}

value_type_t pop(queue_t *queue)
{
    if(true==isEmpty(queue)) 
    {
        printf("Queue is empty! \n");
        return NO_VALUE;
    }

    value_type_t value = queue->data[queue->front_idx];

    queue->front_idx = (queue->front_idx + 1u) % queue->capacity;
    queue->size--;

    return value;
}

value_type_t front(queue_t *queue) 
{
    if(true==isEmpty(queue)) 
    {
        printf("Queue is empty! \n");
        return NO_VALUE;
    }

    return queue->data[queue->front_idx];
}

value_type_t back(queue_t *queue)
{
    if(true==isEmpty(queue)) 
    {
        printf("Queue is empty! \n");
        return NO_VALUE;
    }

    return queue->data[queue->back_idx];
}

void printQueue(queue_t *queue)
{
    if(NULL == queue) 
    {
        printf("Queue is empty! \n");
        return;
    }

    printf("\nQueue contains %u elements with a capacity of %u. \n", queue->size, queue->capacity);

    for (int32_t i = 0; i < queue->size; i++)
    {
        printf("Index: %d, Value %f \n", i, queue->data[i]);
    }
    
}