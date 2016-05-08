// bintang.c : mencetak bintang dengan increament

#include <stdio.h>

int main(void)
{
int i,j,n, jumlah=0;

//meminta input dari user
printf("Masukkan N= ");
scanf("%d", &n);

//memulai proses perulangan
for (i =1; i <= n; i++)        // perulangan ganti baris
{
    for (j=1; j <=i; j++)      // perulangan cetak *
    {
        printf("*");
        jumlah=jumlah+1;
    }
    printf("\n");
}

printf("jumlah bintang= %d \n", jumlah);
}
