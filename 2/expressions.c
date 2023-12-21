// #include <stdio.h>
// #include "show_data.c"

/*
return 1 on a little endian machine, otherwise return 0.
*/
int is_little_endian() {
    //first byte should be 1, last byte should be 0
    int i = 1;
    return *(byte_pointer) &i == i;
}

int is_little_endian1() {
    int i = 1;
    int last = *((byte_pointer) &i + sizeof(int) - 1);
    int first = *(byte_pointer) &i;
    printf("last: %d, first: %d\n", last, first);
    return last != i;  
}

