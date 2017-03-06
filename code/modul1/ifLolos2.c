/* ifLolos2
 * Program untuk menghitung nilai rata-rata 
 * dan mengkonversinya dalam bentuk huruf
 */

#include <stdio.h>

int main(void)
{
    int n, n1, n2, n3, n4;
    printf("Masukkan nilai pertama anda: ");
    scanf("%d",&n1);
    printf("Masukkan nilai kedua anda: ");
    scanf("%d",&n2);
    printf("Masukkan nilai pertama anda: ");
    scanf("%d",&n3);
    printf("Masukkan nilai pertama anda: ");
    scanf("%d",&n4);
    
    n = (n1+n2+n3+n4)/4;
    
    if (n>80)
        printf("Anda mendapat nilai A\n");
    else if (n > 70)
    	printf("Anda mendapat nilai AB\n");
    else if (n > 65)
    	printf("Anda mendapat nilai B\n");
    else if (n > 60)
    	printf("Anda mendapat nilai BC\n");
    else if (n > 50)
    	printf("Anda mendapat nilai C\n");
    else if (n > 40)
    	printf("Anda mendapat nilai D\n");
    else
        printf("Anda mendapat nilai E\n");
}
