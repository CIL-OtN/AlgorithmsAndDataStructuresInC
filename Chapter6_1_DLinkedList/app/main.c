#include <stdio.h>
#include <stdlib.h>

#include "DLinkedList.h"

typedef int typedef_value_t;

// Doubly linke list
typedef struct node 
{
    struct node* prev;
    typedef_value_t data;
    struct node* next;
} node_t;

void insertBefore(node_t** head, typedef_value_t newValue) 
{
    node_t* newNode = (node_t*)malloc(sizeof(node_t));

    newNode->data = newValue;

    if(*head == NULL) 
    {
        newNode->prev = NULL;
        newNode->next = NULL;
        *head = newNode;
    }
    else 
    {
        newNode->prev = NULL;
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
}

void insertAfter(node_t** head, typedef_value_t newValue) 
{
    node_t* newNode = (node_t*)malloc(sizeof(node_t));

    newNode->data = newValue;

    if(*head == NULL) 
    {
        newNode->prev = NULL;
        newNode->next = NULL;
        *head = newNode;
    }
    else 
    {
        node_t* last = *head;
        
        while(last->next != NULL) 
        {
            last = last->next;
        }

        last->next = newNode;
        newNode->prev = last;
        newNode->next = NULL;
    }
}

void searchNode(node_t** head, typedef_value_t key) 
{
    node_t* temp = *head;

    while(temp != NULL) 
    {
        if(temp->data == key) 
        {
            printf("Node with value %d exist! \n", key);
            return;
        }
            
        temp = temp->next;
    }
    
    printf("Node with value %d does not exist! \n", key);
}

void printBackward(node_t** head) 
{
    node_t* temp = *head;

    if(temp == NULL) 
    {
        printf("List backward is empty! \n");
    }

    while(temp->next != NULL) // node is the last one
    {
        temp = temp->next;
    }

    while(temp != NULL) 
    {
        printf("| %d | -> ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

void printForward(node_t** head) 
{
    node_t *temp = *head;

    if(temp == NULL) 
    {
        printf("List forward is empty! \n");
    }

    printf("NULL <- ");
    while(temp != NULL) 
    {
        printf("| %d | %d | %d | -> ",temp->prev, temp->data, temp->next);
        // printf("| %d | %d | %d | -> ",temp->prev, &(*temp), temp->next);
        temp = temp->next;
    }
    printf("NULL \n");

    temp = *head;
}


void deleteNode(node_t** head, uint32_t key) 
{
    if(*head == NULL)
        return;
    
    node_t* temp = *head;

    while(temp != NULL && temp->data != key)    // traverse through list
    {
        temp = temp->next;
    }

    if(temp == NULL)            // node does not exist 
    {
        printf("Node with value %d does not exist! \n", key);
    }
    else if(temp == *head)      // node is the first in the list
    {
        *head = (*head)->next;
        (*head)->prev = NULL;
        free(temp);
    }
    else if(temp->next == NULL) // node is the last one
    {
        temp->prev->next = NULL;
        free(temp);
    }
    else                        // node is somewhere between other nodes
    {
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
}

int main(void) {

    system("clear");

    // createHeadNode();

    node_t* origin = (node_t*)malloc(sizeof(node_t));
    origin = NULL;

    insertBefore(&origin, 10);
    insertBefore(&origin, 20);
    insertBefore(&origin, 30);


    printForward(&origin);

    free(origin);
    origin = NULL;
    // printForward(&origin);

    return 0;
}

/*  // Example: Single linked list

    typedef struct node
    {
        typedef_value_t data;
        struct node* next;
    } node_t;

    node_t* head = (node_t*)malloc(sizeof(node_t));
    node_t* middle = (node_t*)malloc(sizeof(node_t));
    node_t* last = (node_t*)malloc(sizeof(node_t));
    
    head->data = 40;
    head->next = middle;
    
    middle->data = 50;
    middle->next = last;
    
    last->data = 60;
    last->next = NULL;
*/

/*  //Example: Doubly linked list
    
    typedef struct node 
    {
        struct node* prev;
        typedef_value_t data;
        struct node* next;
    } node_t;
    
    node_t* head = (node_t*)malloc(sizeof(node_t));
    node_t* middle = (node_t*)malloc(sizeof(node_t));
    node_t* last = (node_t*)malloc(sizeof(node_t));

    head->data = 10;
    middle->data = 20;
    last->data = 30;
    
    head->prev = NULL;
    head->next = middle;

    middle->prev = head;
    middle->next = last;

    last->prev = middle;
    last->next = NULL;
*/