#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "BinarySearchTree.h"



node_t *createBST(value_type_t value) 
{
    node_t *node = (node_t *)malloc(sizeof(node_t));

    if(NULL == node) 
    {
        return NULL;
    }

    node->left = NULL;
    node->right = NULL;
    node->value = value;

    return node;
}

node_t *freeBST(node_t *node) 
{
    if(NULL == node) 
    {
        return NULL;
    }

    free(node);
}

void printBST(node_t *node) 
{
    if(NULL == node) 
    {
        return;
    }
}