#include <stdio.h>
int main(void)
{
    int n;
    printf("I'd like an integer please: ");
    scanf("%d", &n);
    // analyze user's input
    if (n > 0)
    {
        printf("You picked a positive number!\n");
    }
    else if (n == 0)
    {
        printf("You picked zero!\n");
    }
    else
    {
        printf("You picked a negative number!\n");
    }
}
