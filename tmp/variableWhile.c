/* variableWhile.c
 * demonstrated variable with while
 * 02/24/2016
 * bagustris, bagustris@yahoo.com
 */

#include <stdio.h>
#define true 1

int main(void)
{
  int counter = 0;
  while (true) //( counter <= 10 )
  {
    printf("%d\n", counter);
  counter++;
  }
}
