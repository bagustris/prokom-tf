// arrays.c: demo of array in C

#include <stdio.h>

int add_int_array(int *a, int *b, int *c, int n) {
    int i;

    for (i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
    }
    return 0;
}

float dot_product(float *a, float *b, int n) {
    float res;
    int i;
    res = 0;
    for (i = 0; i < n; i++) {
    res = res + a[i] * b[i];
    }

    return res;
}

int main()
{
    int y;
    y=add_int_array(2, 3, 4);
    printf("%d", c);
}
