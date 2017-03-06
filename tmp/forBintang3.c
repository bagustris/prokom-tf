/* forBintang3.c
 * demonstrated for with increament
 * 02/23/2016
 * bagustris, bagustris@yahoo.com
 */

#include <stdio.h>

int main(void)
{
  int i,j;
  for (i=1; i<=10; i++)
  {
    for (j=1; j<=i; j++)
      printf("*");
    printf("\n");
  }
  return 0;
}
