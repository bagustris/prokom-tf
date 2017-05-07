#include <stdio.h>
// demo const
//#define z 27

int main()
{
  	const int z = 27;     //remove const to make it works
  	printf("z is now %d\n", z);
  	z = z + 2;
  	printf("z is now %d\n", z);
  	return 0;
}

