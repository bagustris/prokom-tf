#include <stdio.h>

int main(void)
{
    int i =0;       // if not, error
    while (i < 10) {
        i++;        // update, if it's not exist, will print * continously
        printf("*");
    }
    printf("\n");
    return 0;
}
    
