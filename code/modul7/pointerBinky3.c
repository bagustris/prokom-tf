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
}
Node;

int main(void)
{
    int i;  // i for number of iteration

	// Allocate the pointers
	struct Node* x;
	struct Node* y;
	struct Node* z;

	// Allocate the pointees
	x = malloc(sizeof(Node));
	y = malloc(sizeof(Node));
	z = malloc(sizeof(Node));

	// Put the numbers in the pointees
	x->value = 1;
	y->value = 2;
	z->value = 3;

    // Put the pointers in the pointee
    x->next = y;
	y->next = z;
	z->next = x;

    // print first 10 cycles
    for (i = 0; i < 10; i++) {
        printf("X = %d, Y = %d, Z = %d\n", x->value, y->value, z->value);
        x = x->next;
        y = y->next;
        z = z->next;
    }

    return 0;
}
