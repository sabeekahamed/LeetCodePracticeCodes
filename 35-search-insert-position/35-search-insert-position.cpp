class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1,mid=0;
       
        while(low<=high)   
        {
            mid = (low + high) >> 1;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
            {
                if(mid != 0 && nums[mid-1] < target)
                    return mid;
                else
                    high = mid-1;
            }
            else if(nums[mid] < target)
            {
                 if(mid != 0 && nums[mid-1] > target)
                    return mid;
                else
                    low = mid + 1;
            }
        }
        return mid ==0 ? (nums[0] < target ? 1 : 0) : mid+1;
    }
};