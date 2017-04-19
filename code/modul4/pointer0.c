#include <stdio.h>

int main()
{
    int i,j;    // variable
    int *p;     /* a pointer to an integer */
    p = &i;
    *p=5;
    j=i;
    printf("i = %d, j = %d, p = %d\n", i, j, *p);
    printf("Address i = %p, j = %p, p= %p\n", &i, &j, &*p);
    return 0;
}

