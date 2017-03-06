// ifKurang.c : mengecek input lebih besar
#include <stdio.h>

int main(void)
{
    // meminta input integer
    int a, b;
    printf("Masukkan sebuah bilangan A: ");
    scanf("%d", &a);
    printf("Masukkan sebuah bilangan B: ");
    scanf("%d", &b);

    // cek user input (somewhat accurately)
    if (a > b)
        printf("Bilangan A > dari bilangan B\n");
    else if (a == b)
        printf("Bilangan A sama dengan bilangan B\n");
    else
        printf("Bilangan A < Bilangan B\n");
        
    return 0;
}
