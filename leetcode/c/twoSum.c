
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *result;
    result = (int *) malloc(2*sizeof(int));
    int i,j;
    
    if (nums == NULL) {
        printf("nums is null!");
        return NULL;
    }
    
    for (i=0; i<numsSize;i++){
        for (j=i+1; j<numsSize; j++ ){
            if (target == nums[i] + nums[j]){
                result[0] = i;
                result[1] = j; 
                *returnSize = 2;
                return result;
            }            
        }
    }
    
    *returnSize = 0;
    printf("I can't find the right result.");
    return NULL;
}

