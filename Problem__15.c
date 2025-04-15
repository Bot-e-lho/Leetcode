//Problema 2574 -- Leetcode
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize){
    int* aux = (int*)malloc(sizeof(int) * numsSize);
    int* leftsum = (int*)malloc(sizeof(int) * numsSize);
    int* rightsum = (int*)malloc(sizeof(int) * numsSize);
    leftsum[0] = 0;
    for(int i = 1; i < numsSize; i++){
        leftsum[i] = leftsum[i-1] + nums[i-1];
    }
    rightsum[numsSize-1] = 0;
    for(int i = numsSize - 2; i>=0; i--){
        rightsum[i] = rightsum[i+1] + nums[i+1];
    }
    for(int i = 0; i < numsSize; i++){
        if((leftsum[i] - rightsum[i]) < 0){
            aux[i] = (leftsum[i] - rightsum[i])*(-1);
        }else{
            aux[i] = leftsum[i] - rightsum[i];
        }
    }
    *returnSize = numsSize;
    return aux;
}
