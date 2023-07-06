//Problema 1365 -- Leetcode
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize){
    int* aux = calloc(numsSize, sizeof(int));
    
    for(int i = 0; i < numsSize; i++){
        for(int j = 0; j < numsSize; j++){
            if(nums[i] > nums[j]){
                aux[i] += 1;
            }
        }
    }
    *returnSize = numsSize;
    return aux;
}
