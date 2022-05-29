class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
        {
            int curValue = target - nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                if(curValue == nums[j])
                    return vector<int>({i,j});
            }
        }
        return vector<int>({});
    }
};