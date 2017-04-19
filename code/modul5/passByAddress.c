/* passByAddress.c
 * from stacoverflow
 * 04/19/2016
 * bagustris, bagustris@yahoo.com
 */

#include <stdio.h>

void f(int *j) {
  (*j)++;
}

int main() {
  int i = 20;
  int *p = &i;
  printf("i = %d\n", i);
  f(p);
  printf("i = %d\n", i);

  return 0;
}
