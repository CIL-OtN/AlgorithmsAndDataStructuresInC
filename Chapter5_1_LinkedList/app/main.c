#include <stdio.h>
#include <stdlib.h>

#include "LinkedList.h"

typedef int typedef_value_t;

typedef struct Node 
{
    typedef_value_t data;
    struct Node* next;
} node_t;


// node_t* head;


node_t *createList(void)
{
    node_t* head = (node_t *)malloc(sizeof(node_t));

    if(NULL == head) 
    {
        return NULL;
    }

    head->data = 0u;
    head->next = NULL;
}

node_t* push(node_t* node, typedef_value_t new_value) 
{
    node_t* temp = (node_t*)malloc(sizeof(node_t));

    temp->data = new_value; // übernimm neuen Wert
    temp->next = node;      // zeige zur nächsten Node-Addresse
    node = temp;            // erschaffe damit eine neue node

    return node;
}

void printList(node_t* node) 
{
    printf("List is: ");
    while(node->next != NULL) 
    {
        // printf("| %d | %d | --> ", node->data, &node->next);
        printf("| %d | -> ", node->data);
        
        node = node->next;
    }
    printf("\n");
}

int main(void) {

    system("clear");

    // head = NULL;    // empty list
    
    node_t* list = createList();
    node_t* lisst = createList();
    
    typedef_value_t n, i, x;

    printf("How many numbers: ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++)
    {
        printf("[%d] = ", i+1);
        scanf("%d", &x);
        list = push(list, x);
        printList(list);
    }
    
    printf("\n");

    return 0;
}


/*  // Example:
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp3 = (struct Node*)malloc(sizeof(struct Node));
    
    temp1->data = 1;
    temp1->next = temp2;
    A = temp1;              // hier schaffe ich den Link zu A

    temp2->data = 2;
    temp2->next = temp3;
    temp1 = temp2;          // hier schaffe ich den Link zu temp2

    temp3->data = 3;
    temp3->next = NULL;
    temp2 = temp3;
*/






