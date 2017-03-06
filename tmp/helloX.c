/* demonstrated input with spaces using inverted scanset, 
 * so scanf keeps taking in values until it encounters a '\n'-- newline
 */
 
#include <stdio.h>

int main (int argc, char const *argv[])
{
    char name[20];
    printf("What is your name? My name is ");
    scanf("%[^\n]s",name);
    printf("Hello, %s\n", name);
    return 0;
}
