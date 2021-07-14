#include <stdio.h>
#include <stdlib.h>

#include "my_lib.h"

typedef int value_type_t;
typedef struct node 
{
    void *data;
    struct node *next;
} node_t;

void push(node_t** head_ref, void* new_data, size_t data_size) 
{
    // Allocate memory for node
    node_t* newNode = (node_t*)malloc(sizeof(node_t));

    newNode->data = malloc(data_size);
    newNode->next = (*head_ref);

    for(size_t i = 0; i < data_size; i++) 
    {
        *(char*)(newNode->data + i) = *(char*)(new_data + i);
    }

    (*head_ref) = newNode;
}

void printList(node_t* node, void (*fptr)(void*)) 
{
    while(node != NULL) 
    {
        (*fptr)(node->data);
        node = node->next;
    }
}

void printInt(void *n) 
{
    printf("| %d | -> ", *(int *)n  );
}

void printFloat(void *f) 
{
    printf("| %.1f | -> ", *(float *)f );
}

void printChar(void *c) 
{
    printf("|  %c | -> ", *(char *)c);
}

int main(void) {

    system("clear");

    node_t* head = NULL;

    size_t i;
    unsigned int_size = sizeof(int);
    unsigned float_size = sizeof(float);
    unsigned char_size = sizeof(char);

    int arrInt[] = {10, 20, 30, 40, 50};

    for(i = 0; i < 5; i++)
        push(&head, &arrInt[i], int_size);

    printf("Integer linked list is  : ");
    printList(head, printInt);
    printf("\n");

    free(head);
    head = NULL;

    float arrFloat[] = {1.0, 2.0, 3.0, 4.0, 5.0};

    for(i = 0; i < 5; i++)
        push(&head, &arrFloat[i], float_size);

    printf("Float linked list is    : ");
    printList(head, printFloat);
    printf("\n");

    free(head);
    head = NULL;

    char arrChar[] = {'W', 'o', 'w', 'a', 'S'}; 

    for(int i = 4; i >= 0; i--)
        push(&head, &arrChar[i], char_size);

    printf("Character linked list is: ");
    printList(head, printChar);
    printf("\n");

    free(head);
    head = NULL;


    return 0;
}









