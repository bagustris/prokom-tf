/* array2: find duplicate
 * Algorithm: calculate arrSum - sum
 */
#include <stdio.h>

int main()
{
  int N=4, arr[N]; //contains integers from 1 to N-1
  int arrSum = 0; //sum of array elements
  int sum = (N * (N - 1)) / 2; //sum of 1 to N-1
  int i; //loop counter
  printf("Enter %d integers form 1 to %d, with one duplicate:", N, N-1);
  for (i = 0; i < N; i++)
  {
    scanf ("%d", &arr[i]);
    arrSum += arr[i];
  }
  printf("\nDuplicate number is: %d\n", arrSum - sum);
}

