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

    node_t *e = createNode(5.0f);

    pushBack(list, a);
    pushBack(list, b);
    pushBack(list, c);
    pushBack(list, d);

    popNode(list, 1);
    printList(list);

    pushNode(list, e, 1);
    printList(list);

    list = freeList(list);


    return 0;
}
