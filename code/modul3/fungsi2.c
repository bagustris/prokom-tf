// fungsi2.c : demo fungsi dengan input dan do-while
#include <stdio.h>

// prototype
int positifInt();

int main(void)
{
    int n = positifInt();
    printf("Terima kasih atas %i-nya!\n", n);
}

// meminta input positive dari user
int positifInt(void) 
{
    int n;
    do
    {
        printf("Masukkan integer postif: ");
        scanf("%i", &n);
    }
    while (n < 1);
    return n;
}
