class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        if(nums.size() <= 1) return nums;
        int prevSum = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            nums[i] += prevSum;
            prevSum = nums[i];
        }
        return nums;
    }
};