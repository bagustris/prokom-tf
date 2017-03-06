// bintang0.c: cetak bintang dan 0
// bagustris@yahoo.com

#include <stdio.h>

int main(void)
{
int i,j,n;
int jumlah0=0;
int jumlahBintang=0;

printf("Masukkan jumlah baris: ");
scanf("%d", &n);
for (i=1; i<=n; i++)            // counter baris
{
	if (i==1 || i==n)		    // cetal baris pertama dan terakhir
	{     
   		for (j=1; j<=n; j++)
		{    
        	printf("*");
        	jumlahBintang = jumlahBintang + 1;
    	}
	}
    else if (i>1 && i<n)     	// cetak baris kedua dan sebelum terakhir
	{        
		for (j=1; j<=n; j++)    // counter kolom
		{
            if (i==j)
			{
                printf("*");
                jumlahBintang = jumlahBintang + 1;
			}
            else if (j==1 || j==n)
			{            
			    printf("*");
                jumlahBintang = jumlahBintang + 1;
			}
            else
			{	            
			    printf("0");
                jumlah0=jumlah0+1;
            }
        }
	}
    printf("\n");
}
printf("Jumlah 0 = %d \n" ,jumlah0);
printf("Jumlah Bintang = %d \n", jumlahBintang);
}
