/***
Value: 
In computer science, a value is a sequence of bits that is interpreted
according to some data type.

Reference:
In computer science, a reference is an object containing information which
refers to data stored elsewhere, as opposed to containing the data
itself. Accessing the value referred to by a reference is called dereferencing
it. References are fundamental to constructing many data structures (such as
    linked lists) and in exchanging information between different parts of a program.

Pointer
In computer science, a pointer is a programming language data type whose value refers directly to (or "points to") another value stored elsewhere in the computer memory using its address. Obtaining the value to which a pointer refers is called dereferencing the pointer. A pointer is a simple
implementation of the general reference data type (although it is quite different from the facility referred to as a reference in C/C++).

***/

#include <stdio.h>
int main() {
int i, vals[5] = {10, 20, 30, 40, 50};

for (i=0; i<5; i++)
    printf("Array %d is %d, Saved in %p.\n", i, vals[i], &vals[i]);
}
