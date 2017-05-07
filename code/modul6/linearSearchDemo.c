/* sequentialSearchDemo.c
 * demonstrated sequential search
 * 04/22/2016
 * bagustris, bagustris@yahoo.com
 */

#include <stdio.h>

int main() {
  int n, i, p, x, find;
  int A[n];
  printf("Number of data: ");
  scanf("%d", &n);
  for(i=0; i<n; i++) {
    printf("Enter number: ");
    scanf("%d", &A[i]);
  }

  printf("Find what number: ");
  scanf("%d", &x);

  find = 0;
  i = 0;
  while((find==0)&&(i<n)) {
    if (A[i] == x) {
      find = 1;
      p = i;
    }
    else
      i=i+1;
  }

  if(find==1)
    printf("%d is found on the %d-th data\n", x, p+1);
  else
    printf("%d is not found\n", x);
}
