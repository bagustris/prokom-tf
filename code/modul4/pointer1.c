/*
 * pointer1.c: demo pointer
 *
 * 04/18/2016 05:19:37 AM
 * bagustris, bagustris@yahoo.com
 *
 * Institut Teknologi Sepuluh Nopember
 */

#include <stdio.h>
int main() {

    // Pointers
    int age;    //define variable
    int * pAge; //define pointer to integer
    age = 19;   //stores 19 in age
    pAge = &age;    // Links up the pointer (address-of)

    //printf("Six year ago you was %d.\n", age);
    printf("Six year ago you was %d.\n", *pAge);

    // dereferencing *
    // Method 1
    age = 25;
    printf("Now you are %d.\n", age);

    // Method 2
    //*pAge = 25;
    //printf("Now you are %d.\n", *pAge);
    //printf("Age: %d.\n", age);

}
