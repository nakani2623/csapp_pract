#include <stdio.h>

#include "show_data.c"
#include "expressions.c"

int main() 
{
    printf("Hello, World!\n");
    
    //testing show_data
    short i = 25;
    long j = 1321403242343;
    double k = 0.00004;

    show_double(k);
    show_short(i);
    show_long(j);

    
    //is_little_endian
    if (is_little_endian())
        printf("Little\n");
    else
        printf("Big\n");

    return 0;
}