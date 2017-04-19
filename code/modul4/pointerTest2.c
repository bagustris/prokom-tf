/* pointerTes.c
 * 1 variabel, 2 pointer with different value
 * 05/02/2016
 * bagustris, bagustris@yahoo.com
 */
#include<stdio.h>
#include<stdlib.h>
int main() {
  int a = 5;
  int *b, *c;
  b = malloc(sizeof(int));
  c = malloc(sizeof(int));
  *b = 10;
  *c = 15;
  printf("%d %d %d\n", a, *b, *c);
  free(b);
  free(c);
  return 0;
}
