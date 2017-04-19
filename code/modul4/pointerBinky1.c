/*
 * pointerBinky1.c: 
 *
 * 04/25/2016 10:32:03 AM
 * bagustris, bagustris@yahoo.com
 *
 * Institut Teknologi Sepuluh Nopember
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* x;
    int* y;

	x = malloc(sizeof(int));
	y = malloc(sizeof(int));

	*x = 1;
	*y = 2;

	printf("X = %d, Y = %d\n", *x, *y);

    x = y;

    printf("X = %d, Y = %d\n", *x, *y);
    return 0;
}
