#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "BinarySearchTree.h"


int main(void) {

    system("clear");

    node_t *root = createBST(1);

    node_t *node2 = createBST(2);
    node_t *node3 = createBST(3);
    node_t *node4 = createBST(4);
    
    root = freeBST(root);

    return 0;
}
