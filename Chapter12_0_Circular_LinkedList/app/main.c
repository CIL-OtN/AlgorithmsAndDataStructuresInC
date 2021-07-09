#include <stdio.h>
#include <stdlib.h>

#include "CLinkedList.h"

typedef int typedef_value_t;

typedef struct node 
{
    typedef_value_t data;
    struct node *next;
} node_t;


void addBefore(node_t** head, typedef_value_t newValue) 
{
    node_t* newNode = (node_t*)malloc(sizeof(node_t));

    newNode->data = newValue;

    if(*head == NULL) 
    {
        newNode->next = newNode;
        *head = newNode;
    }
    else 
    {
        node_t* temp = *head;

        while(temp->next != *head) 
        {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = *head;
        *head = newNode;
    }
}

void addAfter(node_t** head, typedef_value_t newValue) 
{
    node_t* newNode = (node_t*)malloc(sizeof(node_t));

    newNode->data = newValue;

    if(*head == NULL) 
    {
        newNode->next = newNode;
        *head = newNode;
    } 
    else 
    {
        node_t* temp = *head;

        while(temp->next != *head) 
        {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = *head;
    }
}

void searchNode(node_t** head, typedef_value_t key) 
{
    if(*head == NULL) 
    {
        printf("List is empty! \n");
    }

    node_t* temp = *head;

    do 
    {
        if(temp->data == key) 
        {
            printf("Node with value %d found! \n", key);
        }

        temp = temp->next;
    } while(temp != *head);
}

void printList(node_t** head) 
{
    node_t* temp = *head;
    
    if(*head == NULL) 
    {
        printf("List is empty! \n");
    }

    printf(" -> ");
    do 
    {
        printf("| %d | -> ", temp->data);
        temp = temp->next;
    } while(temp != *head);
}






void deleteNode(struct node **head, int key) 
{
    if(*head == NULL)   // if zero nodes exists
    {
        printf("List is empty! \n");
    }

    if( (*head)->data == key && (*head)->next == *head )    // if one node exist
    {
        free(*head);
        *head = NULL;
    }
    else if((*head)->data == key)  // if the delete node is head 
    {
        node_t* last = *head, *temp;

        while(last->next != *head) 
        {
            last = last->next;
        }

        temp = *head;
        last->next = (*head)->next;
        *head = (*head)->next;
        free(temp);
    }
    else 
    {
        node_t* current = *head, *temp;

        while(current->next != *head) 
        {
            if(current->next->data == key) 
            {
                temp = current->next;
                current->next = temp->next;
                free(temp);
                break;
            }

            current = current->next;
        }

        if(current->next == *head)
            printf("Key Not Found! \n");
    }
}

int main() 
{
    system("clear");

    node_t* head = (node_t*)malloc(sizeof(node_t));
    head = NULL;

    addAfter(&head, 10);
    addBefore(&head, 20);
    addAfter(&head, 30);

    deleteNode(&head, 10);

    searchNode(&head, 20);



    printList(&head);

    return 0;
}


/*  Example: Circular Linked list
    node_t* head = (node_t *)malloc(sizeof(node_t));
    node_t* middle = (node_t *)malloc(sizeof(node_t));
    node_t* last = (node_t *)malloc(sizeof(node_t));

    node_t* temp = head;

    head->data = 10;
    head->next = middle;

    middle->data = 20;
    middle->next = last;

    last->data = 30;
    last->next = head;


    printf(" -> ");
    do 
    {
        printf("| %d | -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
*/