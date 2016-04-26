#include <stdio.h>

int main(void)
{
int x=-100;
if  (x < 5 || x > 10)   // OR
    printf("Anda masuk grup A\n");
else if ( x > 5 && x < 10)  // AND
    printf("Anda masuk grup B\n");

return 0;   
}   
