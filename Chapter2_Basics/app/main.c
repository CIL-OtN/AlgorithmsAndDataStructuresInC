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

    struct Student *Mathe[1];
    struct Student *startzeiger, *eintrag;

    // Initialize math-list
    strcpy(Mathe[0]->name, "Johannes");
    strcpy(Mathe[0]->nachname, "Mueller");
    strcpy(Mathe[0]->matrikelnr, "123456");
    Mathe[0]->next = NULL;

    // Mathe[0]->next = &Mathe[1];

    startzeiger = Mathe[0];

    for(eintrag = startzeiger; eintrag != NULL; eintrag = eintrag->next) 
    {
        printf("%s %s %s \n", eintrag->name, eintrag->nachname, eintrag->matrikelnr);
    }

    return 0;
}
