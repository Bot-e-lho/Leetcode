//Problema 1431 -- Leetcode
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){
    bool* result = (bool*)malloc(sizeof(bool) * candiesSize);
    int somacandies = 0;
    for(int i = 0; i < candiesSize; i++){
        if(candies[i] > somacandies){
            somacandies = candies[i];
        }
    }

    for(int i = 0; i < candiesSize; i++){
            if(candies[i] + extraCandies >= somacandies){
                result[i] = true;
        }
            else{
                result[i] = false;
            }
        }
    
    *returnSize = candiesSize;
    return result;
}
