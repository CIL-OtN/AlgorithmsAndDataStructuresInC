#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"

node_t *createNode(value_type_t value) 
{
    node_t *node = (node_t *)malloc(sizeof(node_t));

    if(NULL == node)
    {
        return NULL;
    }

    value_type_t *p_value = (value_type_t*)malloc(sizeof(value_type_t));

    if(NULL == p_value)
    {
        free(node);

        return NULL;
    }

    *p_value = value;

    node->next = NULL;
    node->prev = NULL;
    node->value = p_value;
}

node_t *freeNode(node_t *node)
{
    if(NULL == node) 
    {
        return NULL;
    }

    free(node->value);
    free(node);

    return NULL;
}

list_t *createList(void)
{
    list_t *list = (list_t *)malloc(sizeof(list_t));

    if(NULL == list) 
    {
        return NULL;
    }

    list->front = NULL;
    list->back = NULL;
    list->size = 0u;
}

list_t *freeList(list_t *list)
{
    if(NULL == list) 
    {
        return NULL;
    }

    free(list);

    return NULL;
}

void printList(list_t *list)
{
    if(NULL == list) 
    {
        return;
    }

    printf("List contains %u elements\n", list->size);
}