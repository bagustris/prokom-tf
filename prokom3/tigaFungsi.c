#include <stdio.h>

void fungsiKedua();	//prototyping
void fungsiKetiga(); 

int main()
{
	printf("Saya memanggil fungsi kedua,\n");
	fungsiKedua();
	printf("Memanggil fungsi ketiga\n");
	fungsiKetiga();
	printf("Fungsi kedua sudah dipanggil.\n");
}

void fungsiKedua()
{
	printf("OK, saya hadir.\n");
}

void fungsiKetiga()
{
	printf("OK, Fungsi ketiga hadir.\n");
}
