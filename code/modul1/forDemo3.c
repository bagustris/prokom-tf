// forDemo3.c : for demo with 2 counter
#include <stdio.h>
int main(void) {
int i, j;
for (i=1; i<=10; i++) {
    for (j=1;j<=i; j++)
		printf("*");
	printf("\n");
 	}
}
