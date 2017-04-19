/*
 * funcPointer2.c: demostrated function pointer
 *
 * 04/13/2016 08:10:03 PM
 * bagustris, bagustris@yahoo.com
 *
 * Institut Teknologi Sepuluh Nopember
 */

#include <stdio.h>

int sum(int n1, int n2) {   // Function with two integer parameters returning an integer value
    return n1 + n2;
}

int main(void) {
    int a, b, x, y;
    int (*fp)(int, int);    // Function pointer which can point to a function like sum
    fp = &sum;              // fp now points to function sum
    x = (*fp)(a, b);        // Calls function sum with arguments a and b
    y = sum(a, b);          // Calls function sum with arguments a and b
}

