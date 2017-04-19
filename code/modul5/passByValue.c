#include <stdio.h>

int doit(int x)
{
     x = 5;
     return x;
}

int main()
{
	int z = 27;
	z = doit(z);
	printf("z is now %d\n", z);

return 0;
}
