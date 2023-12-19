#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    size_t i;
    for (i = 0; i < len; i++) 
        printf("%.2x ", *(start + i));
    printf("\n");
}

void show_short(short data) {
    show_bytes((byte_pointer) &data, sizeof(short));
}

void show_long(long data) {
    show_bytes((byte_pointer) &data, sizeof(long));
}

void show_double(double data) {
    show_bytes((byte_pointer) &data, sizeof(double));
}

void show_int(int data) {
    show_bytes((byte_pointer) &data, sizeof(int));
}

int main() 
{
    short i = 25;
    long j = 1321403242343;
    double k = 0.00004;
    int a = 1;
    int b = -1;

    // show_double(k);
    // show_short(i);
    // show_long(j);

    show_int(a);
    show_double((double) a);

    show_int(b);
    show_double((double) b);

    printf("print int a as float 1: %f\n", (double) a);


    return 0;
}