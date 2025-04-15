#include <stdio.h>
#include <stdlib.h>

int* shuffle(int* nums, int numsSize, int n, int* returnSize);

int main()
{
    int nums[] = {2,5,1,3,4,7};
    int n = 3;
   // int nums[] = {1,2,3,4,4,3,2,1};
   // int n = 4;
   // int nums[] = {1,1,2,2};
   // int n = 2;
    
	int numsSize = sizeof(nums)/ sizeof(nums[0]);
	int returnSize = 0;
    int* shuff = shuffle(nums, numsSize, n, &returnSize);

    for (int i = 0; i < n*2; i++) {
        printf("%d ", shuff[i]);
    }
	printf("\n\n");

    free(shuff);

    return 0;
}

int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int* shuff = (int*)malloc(sizeof(int) * numsSize);
	*returnSize = numsSize;

    for (int i = 0; i < n; i++) {
        shuff[i*2] = nums[i];
        shuff[i*2+1] = nums[i+n];
    }

    return shuff;
}
//Primeiro teste:
/*
#include <stdio.h>
#include <stdlib.h>

int* shuffle(int* nums, int n);

int main()
{
    int nums[] = {2, 5, 1, 3, 4, 7};
    int n = 3;

    int* shuff = shuffle(nums, n);

    for (int i = 0; i < n*2; i++) {
        printf("%d ", shuff[i]);
    }

    free(shuff);

    return 0;
}

int* shuffle(int* nums, int n)
{
    int* shuff = (int*)malloc(sizeof(int) * n * 2);

    for (int i = 0; i < n; i++) {
        shuff[i*2] = nums[i];
        shuff[i*2+1] = nums[i+n];
    }

    return shuff;
}
*/
