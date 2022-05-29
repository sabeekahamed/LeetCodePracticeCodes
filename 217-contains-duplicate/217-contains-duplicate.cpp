class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       if(nums.size() == 1) return false;
        set<int>numSet;
        
        for(int num : nums)
        {
            if( numSet.find(num) != numSet.end())
            {
                return true;
            }
            else
            {
                numSet.insert(num);
            }
        }
        return false;
    }
};