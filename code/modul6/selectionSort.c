#include <stdio.h>

#define SIZE 8

void sort(int array[], int size)
{
    // for i = 1 to size - 1
    for(int i = 0; i < (size - 1); i++)
    {
        // for now, set min = i
        int min = i;

        // compare min to all other elements in unsorted subarray
        for(int j = (i + 1); j < size; j++)
        {
            // if you find an even smaller element, that is now min
            if(array[j] < array[min])
            {
                min = j;
            }
        }

        // swap to put min in correct position
        int temp = array[min];
        array[min] = array[i];
        array[i] = temp;
    }

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
