#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student 
{
    char name[16];
    char familienstand[16];
    char geschlecht[16];
    
    struct Student *next;
};

int main() {

    system("clear");

    struct Student Mathe[3];
    struct Student *ptr;
    struct Student *startzeiger, *eintrag;

    ptr = &Mathe[0];
    // Initialize math-list
    strcpy(ptr->name, "Johannes");
    strcpy(ptr->familienstand, "ledig");
    strcpy(ptr->geschlecht, "mannlich");
    ptr->next = &Mathe[1];

    ptr = &Mathe[1];
    strcpy(ptr->name, "Waldemar");
    strcpy(ptr->familienstand, "ledig");
    strcpy(ptr->geschlecht, "mannlich");
    ptr->next = &Mathe[2];

    ptr = &Mathe[2];
    strcpy(ptr->name, "Alexande");
    strcpy(ptr->familienstand, "ledig");
    strcpy(ptr->geschlecht, "mannlich");
    ptr->next = NULL;

    startzeiger = &Mathe[0];

    for(eintrag = startzeiger; eintrag != NULL; eintrag = eintrag->next) 
    {
        printf("%s %s %s \n", eintrag->name, eintrag->geschlecht, eintrag->familienstand);
    }

    return 0;
}
