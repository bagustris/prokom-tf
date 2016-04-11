#include <stdio.h>

void fungsiKedua();	//prototyping

int main()
{
	printf("Saya memanggil fungsi kedua,\n");
	fungsiKedua();
	printf("Fungsi kedua sudah dipanggil.\n");
    return 0;
}

void fungsiKedua()
{
	printf("OK, saya hadir.\n");
}
