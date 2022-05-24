class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int low=0,high=nums.size()-1;
        while(low<=high)
        {
            int curSum = nums[low] + nums[high];
            if(curSum == target)
                return vector({low+1,high+1});
            else if(curSum > target)
                high --;
            else
                low++;
        }
        return vector<int>();
    }
};