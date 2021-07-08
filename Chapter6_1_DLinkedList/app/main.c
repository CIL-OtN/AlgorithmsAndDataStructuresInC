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

void printForward(node_t** head) 
{
    node_t *temp = *head;

    if(temp == NULL) 
    {
        printf("List is empty! \n");
    }

    while(temp != NULL) 
    {
        printf("| %d | -> ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void printBackward(node_t** head) 
{

}

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

int main(void) {

    system("clear");

    // insertAfter
    // insertBefore

    node_t* origin = (node_t*)malloc(sizeof(node_t));
    origin = NULL;
    
    insertAfter(&origin, 5);
    insertAfter(&origin, 8);

    insertBefore(&origin, 10);
  

    printForward(&origin);
    //printBackward(&origin);
    
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