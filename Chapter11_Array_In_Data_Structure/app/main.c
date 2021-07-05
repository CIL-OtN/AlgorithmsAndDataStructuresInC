#include <stdio.h>
#include <stdlib.h>

#include "ArrInDataStruct.h"

#define arrSize 10


void printArray(int *arr, int size) 
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int *createArray() 
{
    int size = 10;
    static int arr[10];

    for (int i = 0; i < size; i++)
    {
        arr[i] = i;
    }

    return arr;
}

void insert(int arr[], int size, int element, int pos) 
{
    for (int i = size; i > pos; i--)
    {
        arr[i] = arr[i-1]; 
    }

    arr[pos] = element;
    size++; 
}

void searchElement(int arr[], int size, int key) 
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == key) 
        {
            printf("%2d: Found at idx[%d] \n", key, i);
        }
    }
}

void removeElement(int arr[], int size, int key) 
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i+1];
    }

    size--;
}


int main(void) {

    system("clear");

//=============================================

//=============================================

    // create array
    int *p = createArray();
    
    printArray(p, arrSize);

    // insert
    int element = 3;
    int pos = 4;    
    int key = 7;
    
    insert(p, arrSize, element, pos);

    printArray(p, arrSize+1);

    searchElement(p, arrSize+1, key);

    key = 8;

    removeElement(p, arrSize+1, key);
        
    printArray(p, arrSize+1);

//=============================================
    
//=============================================

    return 0;
}
