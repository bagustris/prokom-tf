/*
 * unionDemo.c : occupy the same memory, cannot access all vars.
 *
 * 04/25/2016 06:50:38 AM
 * bagustris, bagustris@yahoo.com
 *
 * Institut Teknologi Sepuluh Nopember
 */

#include <stdio.h>
union mixed
{
	char c;
	double f;
	int i;
}u;

int main() {
union mixed x;
x.c = 'Z';
x.f = 786.3860/2.0;
x.i = 200/4;

printf("Character = %c\n", x.c);
printf("Float = %.4f\n", x.f);
printf("Integer = %d\n", x.i);

return 0;
}
