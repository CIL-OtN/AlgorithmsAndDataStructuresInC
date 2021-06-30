#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>

#include "my_lib.h"

typedef float value_type_t;
typedef struct point 
{
    value_type_t count;
} point_t;

int main() {

    system("clear");

    point_t age = {12};

    printf("%u \n", age);

    return 0;
}







