#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Heap.h"


int main(void) {

    system("clear");

    heap_t *heap = createHeap();

    insertValue(heap, 42.0f);
    insertValue(heap, 22.0f);
    insertValue(heap, 60.0f);
    insertValue(heap, 72.0f);
    insertValue(heap, -20.0f);

    assert(5u == heap->size);
    assert(10u == heap->capacity);
    assert(-20.0f == heap->data[0]);
    assert(22.0f == heap->data[1]);
    assert(60.0f == heap->data[2]);
    assert(72.0f == heap->data[3]);
    assert(42.0f == heap->data[4]);

    printf("\nStart printing:\n");
    printf("---------------\n");
    
    printHeap(heap);

    removeMinimum(heap);

    printf("\nStart printing:\n");
    printf("---------------\n");

    printHeap(heap);

    heap = freeHeap(heap);
    assert(NULL == heap);

    return 0;
}
