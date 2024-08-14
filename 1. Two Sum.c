// 1. Two Sum

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* sol = (int*)malloc(*returnSize * sizeof(int*));
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i] + nums[j] == target){
                sol[0] = i;
                sol[1] = j;
                return sol;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}
