#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student 
{
    char name[16];
    char nachname[16];
    char matrikelnr[16];

    struct Student *next;
};

int main() {

    system("clear");

    printf("Hello Bubble \n");

    return 0;
}
