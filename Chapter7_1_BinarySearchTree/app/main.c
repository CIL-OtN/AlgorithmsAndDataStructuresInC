#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "BinarySearchTree.h"

typedef int typedef_value_t;

typedef struct node 
{
    struct node* left;
    typedef_value_t data;
    struct node* right;
} node_t;

node_t* getNewNode(typedef_value_t newValue) 
{
    node_t* newNode = (node_t*)malloc(sizeof(node_t));

    newNode->data = newValue;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

node_t* insert(node_t* node, typedef_value_t newValue) 
{
    if(node == NULL) 
    {
        return getNewNode(newValue);
    }

    if(node->data < newValue)
        node->right = insert(node->right, newValue);
    
    else if(node->data > newValue)
        node->left = insert(node->left, newValue);

    return node;
}

typedef_value_t search(node_t* root, typedef_value_t searchVal) 
{
    if(root == NULL)
        return 0;

    if(root->data == searchVal)
        return 1;
    
    if(root->data < searchVal)
        return search(root->right, searchVal);
    else
        return search(root->left, searchVal);
}

int main(void) {

    system("clear");

    node_t* root = NULL;

    root = insert(root, 100);   // newNode = 100
    root = insert(root, 50);
    root = insert(root, 150);
    root = insert(root, 125);

    bool val = search(root, 200);

    printf("%d \n", val);

    return 0;
}
