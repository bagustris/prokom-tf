/*
 * pointerBinky.c: demo of Binky Pointer Fun
 *
 * 04/25/2016 10:22:20 AM
 * bagustris, bagustris@yahoo.com
 * from http://cslibrary.stanford.edu/106/#s2
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
    *y = 13; //crash ---> deferencing

    printf("X now %d and Y now %d\n", *x, *y);

    free(x);
    return 0;
}
