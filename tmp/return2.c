// return2.c : demo fungsi return, parameter dan variable
#include <stdio.h>

int cube();		// prototipe*/
int x=3;				// global variable*/

int cube(int n)
{
    return n*n*n;
}

int main()
{
    int x = 2;			// local variable
    printf("Nilai x sekarang adalah %i\n", x);
    printf("Cubing...\n");
    // int y = cube(2);		// aktual parameter
	x = cube(x);
    printf("Cubed!\n");
    printf("Nilai x sekarang adalah %i\n", x); // ganti y utk aktual parameter
}

// argumen cube

int cube(int n)
{
    return n*n*n;
}
