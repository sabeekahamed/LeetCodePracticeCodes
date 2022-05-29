class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //O(n^2)
        /*
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
        */
        //search in un ordered map is (1)
        // we need to perform search operation in maximum n times 
        //so time complexity is O(N) and space complexity is O(N) (map)
        unordered_map<int,int> valueMap(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            int curValue = target - nums[i];
            auto itr= valueMap.find(curValue);
            if( itr != valueMap.end())
                return vector<int>({i,itr->second});
            else
                valueMap.insert(pair<int,int>(nums[i],i));
        }
        return vector<int>();
        
    }
};