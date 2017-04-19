//array1.c findd matching value
//still buggy

#include <stdio.h>
#define size 10

int main(void){
    int i, nums[size];
    int j, k, l;
    printf("Enter numbers: ");
	for(i=0; i<size; i++)
    {
    scanf("%d", &nums[i]);
    for(j=i+1; j<size+1; j++) {
        if (nums[i] == nums[j] && nums[j] == nums[k])
    	    printf("match(3)\n");
        else if(nums[i]==nums[j])
    	    printf("match(2)\n");
        else
    	    printf("nothing match\n");
    }
    }
    return 0;
}
