/* fopenDemo.c: demo fopen write/append
 * from cs50 study
 * 04/19/2016
 * bagustris, bagustris@yahoo.com
 */

#include <stdio.h>
#define STUDENTS 3

int main() {
  int i, score[] = {0, 1, 2};

  // change mode to "a" to append existing file
  FILE* file = fopen("data2.bta", "w");
  if (file != NULL)
  {
    for (i = 0; i<STUDENTS; i++)
    {
      fprintf(file, "%i\n", score[i]);
    }
    fclose(file);
  }
}
