// ifPositif.c : mengecek input user positif/negatif
#include <stdio.h>

int main(void)
{
    // meminta input integer
    int n;
    printf("Masukkan sebuah bilangan integer: ");
    scanf("%d", &n);

    // cek user input (somewhat inaccurately)
    if (n > 0)
        printf("Anda memasukkan bilangan positif!\n");
    else
        printf("Anda memasukkan bilangan negatif!\n");
        
    return 0;
}

