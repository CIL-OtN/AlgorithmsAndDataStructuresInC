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

    value_type_t *p_value = (value_type_t *)malloc(sizeof(value_type_t));

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

void pushBack(list_t *list, node_t *node) 
{
    if(NULL == list || NULL == node) 
    {
        return;
    }

    if(list->size > 0) 
    {
        node->next = NULL;
        node->prev = list->back;
        list->back->next = node;
        list->back = node;
    }
    else 
    {
        node->next = NULL;
        node->prev = NULL;
        list->front = node;
        list->back = node;
    }

    list->size++;
}

value_type_t popBack(list_t *list)
{
    if(NULL == list) 
    {
        return NO_VALUE;
    }

    node_t *node = list->back;
    value_type_t value = *(node->value);

    if(list->size > 1u) 
    {
        list->back = node->prev;
        list->back->next = NULL;
    }
    else 
    {
        list->back = NULL;
        list->front = NULL;
    }

    list->size--;

    node = freeNode(node);

    return value;
}

void pushFront(list_t *list, node_t *node)
{
    if(NULL == list || NULL == node) 
    {
        return;
    }

    if(list->size > 0) 
    {
        node->prev = NULL;
        node->next = list->front;
        list->front->prev = node;
        list->front = node;
    }
    else 
    {
        node->next = NULL;
        node->prev = NULL;
        list->front = node;
        list->back = node;
    }

    list->size++;
}

value_type_t popFront(list_t *list)
{
    if(NULL == list) 
    {
        return NO_VALUE;
    }

    node_t *node = list->front;
    value_type_t value = *(node->value);

    if(list->size > 1u) 
    {
        list->front = node->next;
        list->front->prev = NULL;
    }
    else 
    {
        list->back = NULL;
        list->front = NULL;
    }

    list->size--;

    node = freeNode(node);

    return value;
}


value_type_t popNode(list_t *list, uint32_t idx)
{
    if (NULL == list || idx >= list->size)
    {
        return NO_VALUE;
    }

    if (0u == idx)
    {
        return popFront(list);
    }

    if ((list->size - 1u) == idx)
    {
        return popBack(list);
    }

    uint32_t current_idx = 0u;
    node_t *node_at_idx = list->front;

    while (current_idx < idx)
    {
        node_at_idx = node_at_idx->next;

        current_idx++;
    }

    value_type_t value = *(node_at_idx->value);

    node_at_idx->next->prev = node_at_idx->prev;
    node_at_idx->prev->next = node_at_idx->next;

    list->size--;

    node_at_idx = freeNode(node_at_idx);

    return value;
}

void pushNode(list_t *list, node_t *node, uint32_t idx) 
{
    if(NULL == list || NULL == node || idx >= list->size)
    {
        return;
    }

    if(0u == idx) 
    {
        return pushFront(list, node);
    }

    if(list->size -1u == idx) 
    {
        return pushBack(list, node);
    }

    uint32_t current_idx = 0u;
    node_t *node_at_idx = list->front;

    while (current_idx < idx)
    {
        node_at_idx = node_at_idx->next;
        current_idx++;
    }

    node->prev = node_at_idx;
    node->next = node_at_idx->next;
    node_at_idx->next->prev = node;
    node_at_idx->next = node;

    list->size++;
}

value_type_t valueAtIdx(list_t *list, uint32_t idx) 
{
    if(NULL == list || idx >= list->size)
    {
        return NO_VALUE;
    }

    if(0u == idx) 
    {
        return *(list->front->value);
    }

    if(list->size -1u == idx) 
    {
        return *(list->back->value);
    }

    uint32_t current_idx = 0u;
    node_t *node_at_idx = list->front;

    while (current_idx < list->size)
    {
        node_at_idx = node_at_idx->next;
        current_idx++;
    }

    return *(node_at_idx->value);
}

void printList(list_t *list)
{
    if(NULL == list) 
    {
        return;
    }

    printf("List contains %u elements\n", list->size);

    uint32_t current_idx = 0u;
    node_t *node_at_idx = list->front;

    while (NULL != node_at_idx)
    {
        printf("Index: %u, Value: %f \n", current_idx,*(node_at_idx->value));

        node_at_idx = node_at_idx->next;
        current_idx++;
    }
    
    printf("\n");
}