#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>

#include "my_lib.h"



int main() {

    system("clear");

    // Memory allocation - Contigues allocation - 
    int *ptr1, *ptr2;

    ptr1 = malloc(5 * sizeof(int));
    ptr2 = calloc(5, sizeof(int));

    if(ptr1 != NULL) 
    {
        printf("ptr1: Memory allocated successfully!\n");
    }

    printf("Reallocate ptr1 and ptr2 \n");    
    ptr1 = realloc(ptr1, 5 * sizeof(int));

    if(ptr1 != NULL) 
    {
        printf("ptr2: Memory allocated successfully!\n");
    }

    printf("ptr1: \n");
    for (size_t i = 0; i < 5; i++)
    {
        *(ptr1 + i) = i;
        printf("0x%u - %d \n", (ptr1 + i), *(ptr1 + i));
    }
    

    printf("ptr2: \n");
    for (size_t i = 0; i < 5; i++)
    {
        printf("0x%u - %d \n", (ptr2 + i), *(ptr2 + i));
    }

    printf("\n");

    free(ptr1);
    free(ptr2);
    
    return 0;
}







