#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "queue.h"

// First-In First-Out

int main(void) {

    system("clear");

    uint32_t capacity = 4;

    queue_t *queue = createQueue(capacity);

    push(queue, 2.0f);
    push(queue, 2.0f);
    push(queue, 3.0f);
    push(queue, 7.0f);

    pop(queue);

    printf("Front of queue: %f \n", front(queue));
    printf("Back of queue : %f \n", back(queue));


    printQueue(queue);

    queue = freeQueue(queue);


    return 0;
}
