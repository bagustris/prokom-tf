/*
 * headerDemo.c: demonstrated the use of header
 *
 * 04/23/2016 09:09:19 AM
 * bagustris, bagustris@yahoo.com
 *
 * Institut Teknologi Sepuluh Nopember
 */

#include <stdio.h>
#include <string.h>
#include "libHeaderDemo.h"

int main()
{
  int age;
  char childname[14] = "Thomas";
  printf("\n%s have %d member.\n", family, student);
  age = 18;
  printf("The oldest, %s, is %d.\n", childname, age);
  strcpy(childname, "Christopher");
  age = 17;
  printf("The funny boy, %s, is %d.\n", childname, age);
  age = 15;
  strcpy(childname, "Benjamin");
  printf("The youngest, %s, is %d.\n\n", childname, age);
  return 0;
}
