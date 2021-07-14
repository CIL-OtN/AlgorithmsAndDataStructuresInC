#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Graph.h"

#define V 5

typedef int value_type_t;
typedef struct node 
{
    value_type_t data;
    struct node* next;
} node_t;

node_t *adjList[V];

void init() 
{
    for (size_t i = 0; i < V; i++)
    {
        adjList[i] = NULL;
    }
}

void addEdgeAfter(value_type_t src, value_type_t dest) 
{
    node_t* newNode = (node_t*)malloc(sizeof(node_t));

    newNode->data = dest;
    newNode->next = NULL;

    if(adjList[src] == NULL)
    {
        adjList[src] = newNode;
    }
    else 
    {
        node_t* last = adjList[src];

        while(last->next != NULL)
        {
            last = last->next;
        }
        last->next = newNode;
    }
}

void addEdgeBefore(value_type_t src, value_type_t dest) 
{
    node_t* newNode = (node_t*)malloc(sizeof(node_t));

    newNode->data = dest;
    newNode->next = adjList[src];
    adjList[src] = newNode;

}

value_type_t hasEdge(value_type_t src, value_type_t dest) 
{
    node_t* temp = adjList[src];

    while(temp != NULL) 
    {
        if(temp->data = dest)
            return 1;

        temp = temp->next;
    }

    return 0;
}

void printGraph() 
{
    for (size_t i = 0; i < V; i++)
    {
        node_t* temp = adjList[i];
        
        printf("adjList %d: ", i+1);


        printf("| %d | -> ", i);

        while(temp != NULL) 
        {
            printf("| %d | -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL \n");
    }
}

void removeEdge(value_type_t src, value_type_t dest)
{
    if(adjList[src] == NULL) 
    {
        return;
    }

    if(adjList[src]->data == dest) 
    {
        node_t* temp = adjList[src];

        adjList[src] = adjList[src]->next;
        free(temp);
    }
    else 
    {
        node_t* current = adjList[src], *temp;

        while (current->next != NULL)
        {
            if(current->next->data == dest) 
            {
                temp = current->next;
                current->next = temp->next;
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

// add edges in indirected graph
/*
void addEdgeIndirected(value_type_t src, value_type_t dest) 
{
    node_t* newNode = (node_t*)malloc(sizeof(node_t));

    newNode->data = dest;

    newNode->next = adjList[src];
    adjList[src] = newNode;

    newNode = (node_t*)malloc(sizeof(node_t));
    newNode->data = src;

    newNode->next = adjList[dest];
    adjList[dest] = newNode;
}
*/

int main(void) {

    system("clear");

    init();

    addEdgeAfter(0, 1);
    addEdgeAfter(0, 2);
    addEdgeAfter(0, 3);
    addEdgeBefore(0, 4);

    addEdgeAfter(1, 3);
    addEdgeAfter(1, 4);

    addEdgeAfter(2, 3);
    addEdgeAfter(3, 4);

    printGraph();
    
    if(hasEdge(0, 4) == 1)
        printf("Edge exists \n");
    else
        printf("Edge does not \n");

    removeEdge(0, 4);
    removeEdge(0, 2);

    printGraph();
    
    return 0;
}


















/* 
// Functions for indirected graph
void addEdge(int arr[][V], int src, int dest) 
{
    arr[src][dest] = 1;
    arr[dest][src] = 1;
}

void init(int arr[][V]) 
{
    for (size_t i = 0; i < V; i++)
    {
        for (size_t j = 0; j < V; j++)
        {
            arr[i][j] = 0;
        }
    }
}

// Functions for directed graph
void addEdges(int arr[][V], int src, int dest) 
{
    // source -> destination
    arr[src][dest] = 1;
}

int hasEdge(int arr[][V], int src, int dest) 
{
    if(arr[src][dest] == 1)
        return 1;

    return 0;
}

void removeEdge(int arr[][V], int src, int dest) 
{
        arr[src][dest] = 0;
}

void printAdjMatrix(int arr[][V]) 
{
    for (size_t i = 0; i < V; i++)
    {
        for (size_t j = 0; j < V; j++)
        {
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }
}


Main:
    int adjMatrix[V][V];

    init(adjMatrix);

    addEdges(adjMatrix, 0, 1);
    addEdges(adjMatrix, 0, 2);
    addEdges(adjMatrix, 0, 3);
    addEdges(adjMatrix, 1, 3);
    addEdges(adjMatrix, 1, 4);
    addEdges(adjMatrix, 2, 3);
    addEdges(adjMatrix, 3, 4);

    removeEdge(adjMatrix, 3, 4);

    printAdjMatrix(adjMatrix);

*/

