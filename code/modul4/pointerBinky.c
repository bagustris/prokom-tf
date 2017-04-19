/*
 * pointerBinky.c: demo of Binky Pointer Fun
 *
 * 04/25/2016 10:22:20 AM
 * bagustris, bagustris@yahoo.com
 *
 * Institut Teknologi Sepuluh Nopember
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *x;
    int *y;
    x = malloc(sizeof(int));
    *x = 42;
    y = x;   //the solution to avoid crash

    printf("X is %d and Y is %d\n", *x, *y);

    *y = 13; //crash ---> deferencing

    printf("X now %d and Y now %d\n", *x, *y);

    free(x);
    return 0;
}
