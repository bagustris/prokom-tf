// bintangKotak.c : cetak bintang kotak

#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Masukkan jumlah baris: ");
    scanf("%d",&n);

    for (i<0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if (i==0 || i==(n-1))
            {
                printf("*");
            }
            else if(j==0 || j==(n-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
