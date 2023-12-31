// #include <stdio.h>

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
