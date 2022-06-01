class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>lis(nums.size(),1);
        int maxLen = 1;
        for(int i=1;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i] > nums[j] && lis[i] <= lis[j])
                {
                    lis[i] = 1 + lis[j];
                }
            }     
            if(maxLen < lis[i])
                maxLen = lis[i];
        }
        return maxLen;
    }
};