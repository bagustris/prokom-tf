#include <stdio.h>

int main()
{
    int i, a[5];	//={0,1,5,10,20};
    a[0]=0;
    a[1]=1;
    a[2]=5;
    a[3]=10;
    a[4]=20;
    for(i=0; i<5; i++)
        printf("%d ", a[i]);
    printf("\n"); 	//printf("\na[2] = %d \n", a[2]);
    return 0;
}
