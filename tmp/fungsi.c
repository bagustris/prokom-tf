// fungsi.c : demo fungsi dan parameter
#include <stdio.h>

// prototype
void cetakNama(char nama[15]);

int main()
{
	char nama[15];
    printf("Masukkan nama anda: ");
    scanf("%s", nama);
    cetakNama(nama);
}

// menyapa nama
void cetakNama(char nama[15])
{
    printf("halo, %s\n", nama);
}
