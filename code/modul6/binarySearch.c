#include <stdio.h>
#include <stdbool.h> 	// for return true
#define SIZE 7 

bool search(int needle, int haystack[], int size)
{
    // define upper and lower bounds
    int upper = size - 1;
    int lower = 0;
    
    // halve array until bounds overlap
    while(lower <= upper)
    {
        // define middle        
        int middle = (upper + lower) / 2;
       
        // if needle is at middle 
        if(needle == haystack[middle])
        {
            // return true
            return true;
        }
       
        // if needle is left of middle     
        else if(needle < haystack[middle])
        {
            // reset upper bound
            upper = middle - 1;
        }
       
        // if needle is right of middle     
        else if(needle > haystack[middle])
        {
            // reset lower bound
            lower = middle + 1;
        }
    }
    // needle is not in haystack
    return false;    
}

int main(void)
{
    int numbers[SIZE] = { 1, 3, 5, 6, 7, 9, 10};
    int n;
    printf("Masukkan angka yang dicari: ");
    scanf("%d", &n);
    if (search(n, numbers, SIZE))
    {
        printf("ADA\n");
    }
    else
    { 
        printf("TIDAK ADA\n");
    }
}
