#ifndef QUEUE_H_
#define QUEUE_H_


/**************/
/*  INCLUDES  */
/**************/

#include <math.h>
#include <stdint.h>
#include <stdbool.h>


/***********************/
/*  DEFINES AND TYPES  */
/***********************/

typedef float value_type_t;
#define NO_VALUE (value_type_t)INFINITY

typedef struct queue
{
    uint32_t front_idx;
    uint32_t back_idx;
    
    uint32_t size;          // how much "blocks" are stored
    uint32_t capacity;      // how much 
    value_type_t *data;     // array in heap
} queue_t;


/***************/
/*  FUNCTIONS  */
/***************/

queue_t *createQueue(uint32_t capacity);

queue_t *freeQueue(queue_t *queue);

bool isFull(queue_t *queue);

bool isEmpty(queue_t *queue);

void push(queue_t *queue, value_type_t value);

value_type_t pop(queue_t *queue);

value_type_t front(queue_t *queue);

value_type_t back(queue_t *queue);

void printQueue(queue_t *queue);



#endif  // STACK_H_