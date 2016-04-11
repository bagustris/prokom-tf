#include <stdio.h>
int add_int(int a, int b);
    
int main(void){
    int x;
    x= add_int(5,4);
    printf("%d\n", x);
}

int add_int(int a, int b) {
    return a + b;
}

