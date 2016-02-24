#include <stdio.h>

int main(void)
{
    int i, j, n=10;
    for (i = 1; i <= n; i++)
    {
       for (j = 1; j <= i+1; j++)
          printf("*");
      printf("\n");
    }    
}
