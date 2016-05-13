// program untuk menentukan bilangan negatif, 0 atau positif

#include <stdio.h>

int main(void)
{
    int n;
    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &n);

    if (n > 0)
        printf("Anda memasukkan bilangan positif!\n");
    else if (n == 0)
        printf("Anda memasukkan bilangan 0\n");
    else
        printf("Anda memasukkan bilangan negatif!\n");

}
