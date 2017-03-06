// ifLolos.c : menentukan lolos atau tidaknya
/* ini hanya tes 
 * untuk
 * mendemokan
 * penggunanan "if"
 */

#include <stdio.h>

int main(void)
{
    //int n=50;
    int n;
    printf("Masukkan nilai anda: ");
    scanf("%d",&n);
    if (n>60)
        printf("Anda lolos\n");
    else
        printf("Anda tidak lolos\n");
}
