/* fopenDemo.c
 * from cs50 study
 * 04/19/2016
 * bagustris, bagustris@yahoo.com
 */

#include <stdio.h>
#define STUDENTS 3

int main() {
  int i, score[] = {1000, 900, 800};

  // change mode to "a" to append existing file
  FILE* file = fopen("data.bta", "a");
  if (file != NULL)
  {
    for (i = 0; i<STUDENTS; i++)
    {
      fprintf(file, "%i\n", score[i]);
    }
    fclose(file);
  }
}
