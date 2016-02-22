// demonstrated fungsi scanf untuk mengambil input

#include <stdio.h>

int main(void)
{
	char nama[10];
	printf("Masukkan nama anda: ");
    scanf("%s", nama);
    printf("hello, %s\n", nama);
}
