class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0,high=arr.size() - 1;
        int lastIndex = high;
        while(low<=high)
        {
            int mid = (low+high) >> 1;
            if(mid < lastIndex && arr[mid] > arr[mid+1])
            {
                if(mid > 0 && arr[mid] > arr[mid-1] )
                    return mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return -1;
    }
};