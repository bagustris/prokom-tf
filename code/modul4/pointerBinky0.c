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
    int *x, *y;
    x = malloc(sizeof(int));   // allocate memory
    y = malloc(sizeof(int));   // new

    *x = 42;
	y = x;

    printf("X is %d and Y is %d\n", *x, *y);

    *y = 13;

    printf("X now %d and Y now %d\n", *x, *y);
    
    //free(x);    //dealocate memory
    //free(y);

    return 0;
}
