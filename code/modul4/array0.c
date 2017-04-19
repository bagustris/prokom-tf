/* array0.c
 * array.c : demonstrated array
 * 04/24/2015
 * bagustris, bagustris@yahoo.com
 */

#include <stdio.h>

int main()
{
  int sample[10];
  int t;

  for(t=0; t<10; t++) {
    sample[t]=t;
    // for(t=0; t<20; t++)
    printf("this is sample [%d] \n", sample[t]);
  }
  return 0;
}

