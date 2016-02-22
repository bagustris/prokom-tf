//program untuk menentukan lulus/tidak

#include <stdio.h>

int main(void)
{
    int x;                          //x=59;
    printf("Masukkan nilai anda: ");
    scanf("%d", &x);
    
    if (x >= 60)
        printf("anda lulus\n");
    else
        printf("anda tidak lulus\n");     
}
