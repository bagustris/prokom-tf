#include <stdio.h>
void doit (int *x);

int main()
{
int z = 27;
doit( &z );
printf("z is now %d\n", z);
return 0;
} 

void doit(int *x) 
{ 
     *x = 5; 
} 
 
