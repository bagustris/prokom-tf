#include <stdio.h>
int main()
{
int t,i,nums[3][4];
for(t=0; t<3; t++)
{
    for(i=0; i<4; i++)
    {
        nums[t][i]=(t*4)+i+1;
        printf("%d ", nums[t][i]);
    }
printf("\n");
}
return 0;
}
