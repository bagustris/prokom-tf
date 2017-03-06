#include <stdio.h>

int main()
{
	int n;

	do
	{
 	printf("Masukkan angka lebih dari 100: ");
  	scanf("%i", &n);
	}

	while (n <= 100);
	{
		printf("Selamat, anda memasukkan angka yang benar!\n");
	}

  	return 0;
}
