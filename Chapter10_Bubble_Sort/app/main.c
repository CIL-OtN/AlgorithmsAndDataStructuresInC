#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


typedef float value_type_t;

void printArray(value_type_t arr[], uint32_t size) 
{
    for (uint32_t i = 0u; i < size; i++)
    {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}

void swap(value_type_t *a, value_type_t *b) 
{
    value_type_t temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort1(value_type_t arr[], uint32_t size) 
{
    // ascending sorted
    for (uint32_t i = 0u; i < size-1u; i++)
    {
        for (uint32_t j = 0u; j < size - i -1u; j++) 
        {
            if(arr[j] > arr[j + 1u]) 
                swap(&arr[j], &arr[j+1u]);
        }
    }
}

void bubbleSort2(value_type_t arr[], uint32_t size) {

	int i, temp;

    // sorted in descending order
	while(size--) 
    {
		for(i=0; i < size; i++)
        {
			if(arr[i] < arr[i+1])
				swap(&arr[i], &arr[i+1u]);   
		}
	}
}


int main() 
{
    system("clear");

    value_type_t data[] = {-10, 20, -20, 40, 12};

    printf("Unsorted array: ");
    printArray(data, 5u);

    printf("Bubble sort 1 : ");
    bubbleSort1(data, 5u);
    printArray(data, 5u);

    printf("Bubble sort 2 : ");
    bubbleSort2(data, 5u);
    printArray(data, 5u);

    return 0;
}




