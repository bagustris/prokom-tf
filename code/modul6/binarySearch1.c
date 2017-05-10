#include <stdio.h>
#include <stdbool.h>

#define SIZE 8

bool search(int n, int array[], int min, int max)
{
    // return true if n exists in the array
    while (max >= min)
    {    
        int mid = (int) min + (max-min)/2;
        
        if (array[mid] < n)
            min = mid + 1;
        else if (array[mid] > n)
            max = mid - 1;
        else
            return array[mid];
    }
    return 0;
}

int main(void)
{
    int n;
    int numbers[SIZE] = { 4, 8, 15, 16, 23, 42, 50, 108 };
    printf("Masukkan angka yang dicari: ");
    scanf("%d", &n);
    if (search(n, numbers, 0, SIZE))
        printf("\nADA!\n");
    else
        printf("\nTidak ada\n");
    return 0;
}
