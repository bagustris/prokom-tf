/* argumen.c
 * demo argumen in C
 * 04/19/2015
 * bagustris, bagustris@yahoo.com
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
  //program disini
  int i, j, n;
  for (i=0; i< argc; i++)
    for (j=0, n=strlen(argv[i]); j<n; j++)
         printf("argv [%d] [%d] is: %c\n", i, j, argv[i][j]);

  return 0;
}

