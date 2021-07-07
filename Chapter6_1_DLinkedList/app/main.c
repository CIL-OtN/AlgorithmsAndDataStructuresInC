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
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void printBackward(node_t** last) 
{
    node_t *temp = *last;

    if(temp == NULL) 
    {
        printf("List is empty! \n");
    }

    while(temp != NULL) 
    {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

void pushTail();

void pushHead(node_t** head, typedef_value_t newValue) 
{
    node_t* newNode = (node_t*)malloc(sizeof(node_t));

    newNode->data = newValue;

    if(*head == NULL) 
    {
        newNode->next = NULL;
        newNode->prev = NULL;
        *head = newNode;
    }
    else 
    {
        newNode->next = *head;
        newNode->prev = NULL;
        (*head)->prev = newNode;
        *head = newNode;
    }
}

int main(void) {

    system("clear");

    node_t* origin = (node_t*)malloc(sizeof(node_t));
    origin = NULL;

    pushHead(&origin, 8);
    
    pushHead(&origin, 10);
    
    pushHead(&origin, 12);


    printForward(&origin);

    printBackward(&origin-1);
   

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