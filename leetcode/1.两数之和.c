/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    for (int i=0; i<=numsSize; i++){
        for (int j=0; j<=numsSize && j<i; i++){
            if(nums[i] + nums[j] == target){
                int ret[2] = {nums[i], nums[j]};
                *returnSize = 2;
                return ret;
            }
        }
    }
}
// @lc code=end

