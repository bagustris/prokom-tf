/*
 *  linearSearch.c: demo linear search
 *  05/07/2017 11:08:53 PM
 *  Bagus Tris Atmaja, bagus@ep.its.ac.id
 *  Institut Teknologi Sepuluh Nopember
 */

#include <stdio.h>
 
int main()
{
   int array[100], search, c, n;
 
   printf("Enter the number of elements in array\n");
   scanf("%d",&n);
 
   printf("Enter %d integer(s)\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
 
   printf("Enter the number to search\n");
   scanf("%d", &search);
 
   for (c = 0; c < n; c++)
   {
      if (array[c] == search)     /* if required element found */
      {
         printf("%d is present at location %d.\n", search, c+1);
         break;
      }
   }
   if (c == n)
      printf("%d is not present in array.\n", search);
 
   return 0;
}
