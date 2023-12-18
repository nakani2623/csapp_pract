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

void show_double(short data) {
    show_bytes((byte_pointer) &data, sizeof(double));
}

int main() 
{
    short i = 25;
    long j = 1321403242343;
    double k = 0.00004;

    show_double(k);
    show_short(i);
    show_long(j);
    return 0;
}