#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "my_lib.h"

typedef int value_type_t; 

typedef struct 
{
    value_type_t age;
    value_type_t roll;
    char name[100];
} student_t;


// TODO: Versuche die nächsten drei Funktionen in eine zu packen! Swich case...?
int cmpRoll(const void *x, const void *y) 
{
    return ( (student_t*)x)->roll - ((student_t*)y)->roll;
}

int cmpAge(const void *x, const void *y) 
{
    return ( (student_t*)x)->age - ((student_t*)y)->age;
}

int cmpName(const void *x, const void *y)   //  TODO: Implementier sortierung nach erstem Buchstaben!
{
    return ( (student_t*)x)->name - ((student_t*)y)->name;
}

int main() {

    system("clear");
    printf("\n");

    student_t s[3] =  {
                        {25, 111, "Walter"},
                        {20, 114, "Amadeus"},
                        {36, 113, "Gangi"}
                    };

    qsort(s, 3, sizeof(student_t), cmpName);

    for (size_t i = 0; i < 3; i++)
    {
        printf("%d \t %d \t %s \n", s[i].age, s[i].roll, s[i].name);
    }
    
    return 0;
}




