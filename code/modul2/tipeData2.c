// tipeData2.c: ukuran tipe data yg berbeda
#include <stdio.h>

int main(void)
{
    // beberapa tipe data
    char c;
    double d;
    float f;
    int i;

    // menghitung ukuran tipe data
    printf("char: %i\n", sizeof(c));
    printf("double: %i\n", sizeof(d));
    printf("float: %i\n", sizeof(f));
    printf("int: %i\n", sizeof(i));
}
