// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 0,end=n;
        while(start <= end)
        {
            int mid = start + ((end-start) >> 1);
            if(isBadVersion(mid))
            {
                if(mid == 1 || !isBadVersion(mid-1) )
                    return mid;
                end = mid-1;
            }
            else
            {
                if(mid < n && isBadVersion(mid+1))
                    return mid+1;
                start = mid+1;
            }
            
        }
        return -1;
    }
};