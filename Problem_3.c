/*
Given a zero-based permutation nums (0-indexed), build an array ans of the same length where ans[i] = nums[nums[i]] 
for each 0 <= i < nums.length and return it.
A zero-based permutation nums is an array of distinct integers from 0 to nums.length - 1 (inclusive).

*/
#include <stdio.h>
#include <stdlib.h>

int* buildArray(int* nums, int numsSize, int* returnSize);

int main()
{
    int n;
    int returnSize = 0;
    printf("\nInforme o tamanho do array: ");
    scanf("%d", &n);
    int* nums = (int*)malloc(n * sizeof(int));

    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("\nInforme o valor[%d]: ", i + 1);
        scanf("%d", &nums[i]);
    }
    printf("\n");
    int* aux = buildArray(nums, n, &returnSize);
    printf("\nArray original:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", nums[i]);
    }
    printf("\n\n");
    printf("Array:\n");
    for (int i = 0; i < returnSize; i++) {
        printf("%d\t", aux[i]);
    }
	printf("\n");
    free(nums);
    free(aux);

    return 0;
}

int* buildArray(int* nums, int numsSize, int* returnSize)
{
    int* ans = (int*)malloc(numsSize * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        ans[i] = nums[nums[i]];
    }

    *returnSize = numsSize;
    return ans;
}
