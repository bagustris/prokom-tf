/*
 * An example of C-style pass by reference
 * Notice what happens to the value of a and b after it is passed by
 * reference to the arg_modifier function
 * (newhall, 2012)
 */
#include <stdio.h>

int arg_modifier(int x, int *y);

int main() {
  int a, b, ret;

  a = 2;
  b = 3;
  printf("before call: a = %d b = %d\n", a, b); //2 3

  ret = arg_modifier(a, &b);
  printf("after arg_modifier(a, &b): a = %d b = %d\n", a, b);  // 2 5

  ret = arg_modifier(b, &a);
  printf("after arg_modifier(b, &a): a = %d b = %d\n", a, b);    // 7 5

  return 0;
}
/************************************************************************/
/*
 * This function illustrates C-style pass by reference, the argument 
 * value pointed to by the second argument, y, will be modified after
 * the call, the value of the first argument, x, will not.  
 */
int arg_modifier(int x, int *y) {

  printf("  entering arg_modifier: x = %d *y = %d\n", x, *y); // 2 3
  *y = *y + x;
  x = 10;
  printf("  leaving arg_modifier: x = %d *y = %d\n", x, *y); //10 5
  return x;
}
