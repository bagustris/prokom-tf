/*
 * headerDemo3.c
 *
 * 04/23/2016 09:42:09 AM
 * bagustris, bagustris@yahoo.com
 *
 * Institut Teknologi Sepuluh Nopember
 */

#include<stdio.h>
#include"libHeaderDemo2.h"

int main() {
   int num1 = 10, num2 = 10, num3;
   num3 = add(num1, num2);       // call function in header
   printf("Addition of Two numbers : %d\n", num3);

   return 0;
}
