#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "BinarySearchTree.h"

typedef int value_type_t;
#define NO_VALUE (value_type_t)INFINITY
#define COUNT 10
typedef struct node 
{
    struct node* left;
    value_type_t data;
    struct node* right;
} node_t;

node_t* getNewNode(value_type_t newValue) 
{
    node_t* newNode = (node_t*)malloc(sizeof(node_t));

    newNode->data = newValue;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

node_t* insert(node_t* node, value_type_t newValue) 
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

value_type_t search(node_t* root, value_type_t searchVal) 
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

value_type_t getRightMin(node_t* root) 
{
    node_t* temp = root;

    while(temp->left != NULL)
        temp = temp->left;

    return temp->data;
}

node_t* removeNode(node_t* root, value_type_t removeVal) 
{
    if(root == NULL)
        return NULL;

    if(root->data < removeVal)
        root->right = removeNode(root->right, removeVal);
    
    else if(root->data > removeVal)
        root->left = removeNode(root->left, removeVal);

    else 
    {
        if(root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }
        else if(root->left == NULL)
        {
            node_t* temp = root->right;
            free(root);
            
            return temp;
        }
        else if(root->right == NULL) 
        {
            node_t* temp = root->left;
            free(root);

            return temp;
        }
        else
        {
            value_type_t rightMin = getRightMin(root->right);
            root->data = rightMin;
            root->right = removeNode(root->right, rightMin);
        }
    }
}

void printBST(node_t* root) 
{
    if(root == NULL) 
    {
        return;
    }

    node_t* left_node = root->left;
    node_t* right_node = root->right;

    value_type_t left_value = left_node != NULL ? left_node->data : NO_VALUE;
    value_type_t right_value = right_node != NULL ? right_node->data : NO_VALUE;

    printf("  %.2d\n" "/          \\ \n" "%.2d    %.2d  \n\n", root->data, left_value, right_value);

    printBST(root->left);
    printBST(root->right);
}


int main(void) {

    system("clear");

    node_t* root = NULL;

    root = insert(root, 100);   // newNode = 100
    root = insert(root, 50);
    root = insert(root, 150);
    root = insert(root, 125);

   printBST(root);
    
    //bool val = search(root, 200);
    //printf("%d \n", val);

    return 0;
}
