class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int curSum = 0;           
        int left = 0;           
        int right = 0;          
        int shortest = INT_MAX; 

        while(right<n){
            curSum += nums[right];

            if(curSum >= target)
            {
                while(curSum>=target)
                {
                    curSum -= nums[left];
                    left++;
                }
                shortest = std::min(shortest,right-left+2);
            }
            right++;
        }
        return shortest==INT_MAX?0:shortest;
    }
};