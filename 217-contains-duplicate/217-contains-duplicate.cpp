class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> numCount;
        for(int num : nums)
        {
            auto itr = numCount.find(num);
            if( itr != numCount.end())
            {
                return true;
            }
            else
            {
                numCount.insert(pair<int,int>(num,1));
            }
        }
        return false;
    }
};