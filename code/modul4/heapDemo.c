/*
 * heapDemo.c: free all heap memory
 *
 * 04/17/2016 10:30:50 PM
 * bagustris, bagustris@yahoo.com
 *
 * Institut Teknologi Sepuluh Nopember
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* ptr = malloc(sizeof(char) * 7);
    int i;
    for (i = 0; i < 6; i++)
    {
        *(ptr + i) = 'z';
    }

    ptr[6] = '\0';

    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }

    // reset ptr
    ptr -= 6;

    // free ptr
    free(ptr);
}
