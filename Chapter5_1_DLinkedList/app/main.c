#include <stdio.h>
#include <stdlib.h>

#include "DLinkedList.h"



int main(void) {

    system("clear");

    list_t *list = createList();

    node_t *a = createNode(1.0f);
    node_t *b = createNode(2.0f);
    node_t *c = createNode(3.0f);
    node_t *d = createNode(4.0f);

    pushFront(list, a);
    pushFront(list, b);
    pushBack(list, c);
    pushFront(list, d);

    printList(list);



    popBack(list);
    popFront(list);

    printList(list);

    list = freeList(list);

   


    return 0;
}