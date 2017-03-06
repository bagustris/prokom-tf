#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i;            // firstly undeclared. error.
    do
    {
        printf("Give me an int: ");
        i = GetInt();       // not int i = getint
    }
    while (i < 0 || i > 10);        //did this need semicolon ; ?
    	printf("Thanks, i is %d\n", i);
    return 0;
}

