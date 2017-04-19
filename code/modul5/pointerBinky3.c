/*
 * pointerBinky2.c : question 3
 *
 * 04/25/2016 10:42:00 AM
 * bagustris, bagustris@yahoo.com
 *
 * Institut Teknologi Sepuluh Nopember
 */

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* next;
};

int main(void)
{
	// Allocate the pointers
	struct Node* x;
	struct Node* y;
	struct Node* z;

	// Allocate the pointees
	x = malloc(sizeof(int));
	y = malloc(sizeof(int));
	z = malloc(sizeof(int));

	// Put the numbers in the pointees
	x->value = 1;
	y->value = 2;
	z->value = 3;

    printf("X = %d, Y = %d, Z = %d\n", x->value, y->value, z->value);

	// Put the pointers in the pointees
	x->next = y;
	y->next = z;
	z->next = x;

    printf("X = %d, Y = %d, Z = %d\n", x->value, y->value, z->value);
    return 0;
}
