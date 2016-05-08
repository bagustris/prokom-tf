// demonstrated fungsi scanf untuk mengambil input

#include <stdio.h>

int main(void)
{
	char nama[5];    
	printf("Masukkan nama anda: ");
    scanf("%s", nama);
    printf("hello, %s\n", nama);
}
