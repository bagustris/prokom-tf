#include <stdio.h>
 
int main()
{

int n;
printf("Masukkan angka 1 - 100: ");
scanf("%d", &n);

if ( n >= 1 && n <= 33)
printf("Anda memasukkan angka kecil \n");

else if ( n >= 34 && n <= 67)
printf("Anda memasukkan angka sedang \n");

else if ( n >= 68 && n <= 100)
printf("Anda memasukkan angka besar \n");

else 
printf("Anda memasukkan angka yang salah \n");

return 0;
}
