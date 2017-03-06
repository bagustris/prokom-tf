#include <stdio.h>
#define a 0		// 0 false, !0 true

int main(void)
{
    int counter = 10000000;
    while (a)
    {
        printf("%d\n", counter);
        counter++;
    }
    return 0;
}
