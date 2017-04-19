/*
 * headerDemo1.c
 *
 * 04/23/2016 09:21:07 AM
 * bagustris, bagustris@yahoo.com
 *
 * Institut Teknologi Sepuluh Nopember
 */

#include <stdio.h>
#include "libHeaderDemo1.h"

int main() {
    char name[20] = "Thomas";
    printf("Hy, My name is %s and I lived on the address below!\n", name);
    address();
    return 0;
}
