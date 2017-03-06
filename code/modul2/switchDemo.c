#include <stdio.h>
 
int main()
{
int n; 
printf("Masukkan angka 1-3: ");
scanf("%d", &n);
 
switch (n)
{
	case 1:
		printf("Anda memasukkan angka kecil");
	break;
	case 2:
		printf("Anda memasukkan angka sedang");
	break;
	case 3:
		printf("Anda memasukkan angka besar");
	break;
	default:
		printf("Anda memaskukkan angka yang salah");
	break;
}
printf("\n");
return 0;
}
