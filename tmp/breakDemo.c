/*
 * breakDemo.c: demonstrated break from "for loops
 * loop i times
 * 04/10/2016 05:22:45 PM
 * bagustris, bagustris@yahoo.com
 *
 * Institut Teknologi Sepuluh Nopember
 */

#include <stdio.h>
int main()
{
    int i;
    //printf("Hello world!");
    for (i=0; i<100; i++)
        {
            printf("Hello world\n");
            if(i==10)
                break;
        }
    return 0;
}
