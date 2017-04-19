/*
 * array3.c 
 *
 * 04/10/2016 09:28:25 AM
 * bagustris, bagustris@yahoo.com
 *
 * Institut Teknologi Sepuluh Nopember
 */

#include <stdio.h>
int main(void)
{

float rata2; int i, jml, min, max, nums[10];
printf("Masukkan 10 angka: ");
for(i=0; i<10; i++) {
    scanf("%d", &nums[i]);
    jml=jml+nums[i];
    if (i==0)
        min=max=nums[i];
    else {
        if(nums[i]<min)
            min=nums[i];
        if(nums[i]>max)
            max=nums[i];
    }
}
printf("\n");
rata2 = jml/10.0;
printf("Rata-rata adalah %.2f\n", rata2);
printf("Min: %d\n", min);
printf("Max: %d\n", max);
printf("Jumlah: %d\n", jml);
}
