#include <stdio.h>

#define SIZE 8

void sort(int array[], int size)
{
    int swaps;

    // do while swaps > 0
    do
    {
        // reset swaps to 0
        swaps = 0;

        // iterate through entire array
        for(int i = 0; i < (size-1); i++)
        {
            // if array[i] > array[i+1]
            if(array[i] > array[i + 1])
            {
                // swap them
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;

                // increment swaps
                swaps++;
            }
        }
    }
    while(swaps != 0);
}

int main(void)
{
    int numbers[SIZE] = { 4, 15, 16, 50, 8, 23, 42, 108 };
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
    sort(numbers, SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
}
