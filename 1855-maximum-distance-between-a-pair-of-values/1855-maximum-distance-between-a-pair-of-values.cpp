class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int max= 0 ;
        for(int i=0;i<nums1.size();i++)
        {
            int j = binarySearch(nums2,i,nums1[i]);
            if(j != -1)
                max = std::max(j-i,max);
        }
        return max;
    }
    int binarySearch(vector<int>& nums2,int i,int tar)
    {
        int lo = i,hi = nums2.size()-1,ans=-1;
        while(lo <= hi)
        {
            int mid = lo + (( hi-lo) >>1);
            if(nums2[mid] < tar)
            {
                hi= mid-1;
            }
            else
            {
                ans = mid;
                lo=mid+1;
            }
        }
        return ans;
    }
};