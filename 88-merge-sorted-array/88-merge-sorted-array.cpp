class Solution {
public:
    /*
         nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
            1,2,3,0,0,0
            2,5,6
            st1)
                1,2,3,0,0,6
                  2,5
            st2)
                1,2,3,0,5,6
                    2
            st3)
                1,2,3,3,5,6
                  2
            st4)
                1,2,2,3,5,6
         
    */
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,k=m+n-1;
        while(i>=0&&j>=0)
        {
            if(nums1[i] > nums2[j])
            {
                nums1[k--] = nums1[i--];
            }
            else
            {
                nums1[k--] = nums2[j--];
            }
        }
        while(i>=0)
            nums1[k--] = nums1[i--];
        while(j>=0)
            nums1[k--] = nums2[j--];
            
    }
};