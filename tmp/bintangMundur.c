<<<<<<< HEAD
// bintangMundur.c : cetak bintang mundur

#include <stdio.h>

int main()
{
int i, n, j, m, jumlah=0;
printf("Masukkan N: ");
scanf("%d",&n);
m=n;

//cetakBintang
for (i=1; i<=n; i++)
{   
    for (j=1; j<=m; j++)
    {
        printf("*");
        jumlah= jumlah + 1;
    }
    printf("\n");
    m=m-1;
}

printf("Jumlah bintang= %d\n", jumlah);
return 0;

}
=======
// bintangMundur.c : cetak bintang mundur

#include <stdio.h>

int main()
{
int i, n, j, m, jumlah=0;
printf("Masukkan N: ");
scanf("%d",&n);
m=n;

//cetakBintang
for (i=1; i<=n; i++)
{   
    for (j=1; j<=m; j++)
    {
        printf("*");
        jumlah= jumlah + 1;
    }
    printf("\n");
    m=m-1;
}

printf("Jumlah bintang= %d\n", jumlah);
return 0;

}
>>>>>>> c92716d1d64b58723ab085e26bc87813d27dc5ce
