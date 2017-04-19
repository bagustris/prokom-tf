#include <stdio.h>

int main(){
    int x = 5;
    int *y = &x;
    printf("X = %d\n", x);
    printf("Y = %d\n", *y);
    return 0;
}
