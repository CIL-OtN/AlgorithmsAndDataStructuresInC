#include <stdio.h>
#include <stdlib.h>

#include "LinkedList.h"

typedef int typedef_value_t;
typedef struct node 
{
    typedef_value_t data;
    struct node *next;
} node_t;

void pushFront(node_t **head, typedef_value_t value) 
{
    node_t *newNode = malloc(sizeof(node_t));
   
    newNode->data = value;
    newNode->next = *head;

    *head = newNode;
}

void pushBack(node_t **head, typedef_value_t value) 
{
    node_t *newNode = malloc(sizeof(node_t));

    newNode->data = value;
    newNode->next = NULL;

    if(*head == NULL) 
    {
        *head = newNode;
    }
    else 
    {
        node_t *lastNode = *head;

        while (lastNode->next != NULL)
        {
            lastNode = lastNode->next;
        }

        lastNode->next = newNode;
    }
}

void printList(node_t **head) 
{
    node_t *temp = *head;

    if(temp == NULL) 
    {
        printf("List is empty! \n");
    }

    while(temp != NULL) 
    {
        printf("%u ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void deleteNode(struct node **head, int key)
{
    node_t *temp;

    if((*head)->data == key) 
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
    else 
    {
        node_t *current = *head;
        
        while(current->next != NULL) 
        {
            if(current->next->data == key) 
            {
                temp = current->next;
                current->next = current->next->next;
            
                free(temp);
                break;
            }
            else 
            {
                current = current->next;
            }
        }
    }
}

int searchNode(node_t **head, typedef_value_t key) 
{
    node_t *temp = *head;

    while(temp != NULL) 
    {
        if(temp->data == key) 
        {
            return 1;
        }

        temp = temp->next;
    }

    return -1;
}

int main(void) {

    system("clear");

    node_t *head = NULL;

    // list is empty!
    printList(&head);

    // push one node before and one node after the list 
    pushFront(&head, 10);
    pushBack(&head, 20);
    printList(&head);

    // search node
    searchNode(&head, 10);

    // Node does not exist
    deleteNode(&head, 10);
    printList(&head);



    printf("Program end \n");

    return 0;
}









