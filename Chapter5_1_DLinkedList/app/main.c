#include <stdio.h>
#include <stdlib.h>

#include "DLinkedList.h"



int main(void) {

    system("clear");

    list_t *list = createList();

    node_t *a = createNode(1.0f);
    node_t *b = createNode(2.0f);
    node_t *c = createNode(3.0f);

    list = freeList(list);

    printf("Es lauft! \n");


    return 0;
}
