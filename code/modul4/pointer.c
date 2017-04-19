/*
 * pointer.c: demonstrated pointer
 *
 * 04/13/2016 08:02:28 PM
 * bagustris, bagustris@yahoo.com
 *
 * Institut Teknologi Sepuluh Nopember
 */

#include <stdio.h>
int main() {
    //int *ptr;   // pointer that points to an object of type int
    int a = 5;
    int *ptr = NULL; // pointer that points to an object of type int

    ptr = &a;
    printf("a = %d\n", a);

    *ptr = 8;       // dereferencing a to 8
    printf("a = %d\n", a);

    return 0;
}
