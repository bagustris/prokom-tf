/*
 * constantReferecence.c
 *
 * 04/25/2016 03:42:08 PM
 * bagustris, bagustris@yahoo.com
 *
 * Institut Teknologi Sepuluh Nopember
 */

#include <stdio.h>

//define const, remove to passByRef
void doit(const int *x) 
{ 
    *x = 5; // ILLEGAL 
} 
 
// Main Function 
int main() 
{ 
    int z = 27; 
    doit(&z); 
    printf("z is now %d\n", z); 
 
    return 0; 
} 
