/*
 * fungsi5.c: find max of two with function
 *
 * 04/13/2016 01:40:58 PM
 * bagustris, bagustris@yahoo.com
 *
 * Institut Teknologi Sepuluh Nopember
 */

#include <stdio.h>
 
/* function declaration */
int max(int num1, int num2);
 
int main () {
   
   /* local variable definition */
   int a = 100;
   int b = 200;
   int ret;
 
   /* calling a function to get max value */
   ret = max(a, b);
   printf( "Max value is : %d\n", ret );
   return 0;
}
 
/* function returning the max between two numbers */
int max(int num1, int num2) {

   /* local variable declaration */
   int result;
   if (num1 > num2)
      result = num1;
   else
      result = num2;
   return result; 
}
