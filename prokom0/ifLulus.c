// program untuk menentukan lulus/tidak

#include <stdio.h>

int main(void)
{
    int x, m1, m2, m3, m4;                          //x=59;
    printf("Masukkan nilai 1 anda: ");
    scanf("%d", &m1);

    printf("Masukkan nilai 2 anda: ");
    scanf("%d", &m2);

    printf("Masukkan nilai 3 anda: ");
    scanf("%d", &m3);

    printf("Masukkan nilai 4 anda: ");
    scanf("%d", &m4);

    x=(m1+m2+m3+m4)/4;

    if (x > 60)
 1       printf("anda lulus\n");
    else
        printf("anda tidak lulus\n");
    return 0;
}
