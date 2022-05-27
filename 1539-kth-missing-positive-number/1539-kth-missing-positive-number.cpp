class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        if(arr[0] > k) return k;
        int start = 0,end =arr.size()-1,nearNextmid = 0;
        while(start <= end)
        {
            int mid = start + ((end -start) >> 1);
            if(arr[mid] - ( mid+1) < k)
            {
                nearNextmid = mid+1;
                start = mid+1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return k+nearNextmid;
    }
};