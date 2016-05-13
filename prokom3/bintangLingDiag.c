// bintangDiang: print start diagonally

#include <stdio.h>

int main()
{
    int i,j,n;
    printf("masukkan jumlah baris: ");
    scanf("%d", &n);

    for ( i =0; i < n; i++)
    { 
        for (j = 0; j < n; j++)
        { 
            if ( i == j)
            {
                printf("*");
            }
            else
                printf ("o");
        }
        printf("\n");
    }
    return 0;
}
