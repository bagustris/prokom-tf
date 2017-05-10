/*
 *  linearSearch2.c: Linear search dengang fungsi
 *  05/07/2017 11:18:30 PM
 *  Bagus Tris Atmaja, bagus@ep.its.ac.id
 *  Institut Teknologi Sepuluh Nopember
 */

#include <stdio.h>
 
long linear_search(long [], long, long);
 
int main()
{
   long array[100], search, c, n, position;
 
   printf("Input number of elements in array\n");
   scanf("%ld", &n);
 
   printf("Input %ld numbers\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%ld", &array[c]);
 
   printf("Input number to search\n");
   scanf("%ld",&search);
 
   position = linear_search(array, n, search);
 
   if (position == -1)
      printf("%ld is not present in array.\n", search);
   else
      printf("%ld is present at location %ld.\n", search, position+1);
 
   return 0;
} 
 
long linear_search(long a[], long n, long find) {
   long c;
 
   for (c = 0 ;c < n ; c++ ) {
      if (a[c] == find)
         return c;
   }
 
   return -1;
}
