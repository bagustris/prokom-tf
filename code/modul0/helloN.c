// helloN.c : mencetak hello world sebanyak N baris
#include <stdio.h>

int main()
{
	int i,n;

	//meminta inpur user
	printf("Masukkan N: ");
	scanf("%d",&n);

	//memulai perulangan helloworld
	for(i=1; i<=n; i++)
    	printf("hello world \n");     //tambahkan "\n" untuk ganti baris, hapus spasi akan berhimpit:wq
}
