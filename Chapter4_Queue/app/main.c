#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "queue.h"

// First-In First-Out

int main(void) {

    system("clear");

    uint32_t capacity = 4;

    int a = 4;
    int b = 10;

    int c = a % b;

    queue_t *queue = createQueue(capacity);

    push(queue, 5.0f);

    push(queue, 7.0f);

    push(queue, 8.0f);

    push(queue, 10.0f);

    pop(queue);

    pop(queue);
    
    pop(queue);
    
    pop(queue);

    front(queue);
    back(queue);

    push(queue, 10.0f);
    push(queue, 20.0f);
    push(queue, 30.0f);

    printf("Front of queue: %f \n", front(queue));

    printf("Back of queue: %f \n", back(queue));


    printQueue(queue);

    queue = freeQueue(queue);


    return 0;
}
