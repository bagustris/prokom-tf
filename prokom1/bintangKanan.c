// bintangSpasi.c
#include <stdio.h>

int main()
{
int i, j, n, jumlah=0;
printf("Masukkan jumlah baris: ");
scanf("%d", &n);

for (i = 1; i<=n; i++)
{  
    // cetak spasi
    for (j = 1; j<=(n-i); j++)
    printf(" ");
    
    // cetak bintang
    for (j = 1; j<=i; j++)
    {
        printf("*");
        jumlah =jumlah+1;
    }
    
    printf("\n");   // ganti baris
}    

return 0;
}
