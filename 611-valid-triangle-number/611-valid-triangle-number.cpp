class Solution {
   
public:
    int triangleNumber(vector<int>& nums) {
        if(nums.size()<3) return 0;
        sort(nums.begin(),nums.end());
        int numOfTrianlges = 0 ;
        for(int i=2;i<nums.size();i++)
        {
            int left = 0,right =i-1;
            while(left<right)
            {
                if(nums[left] + nums[right] > nums[i])
                {
                    numOfTrianlges += (right - left);
                    right--;
                }
                else
                {
                    left++;
                }
            }
        }
        return numOfTrianlges;
    }
};