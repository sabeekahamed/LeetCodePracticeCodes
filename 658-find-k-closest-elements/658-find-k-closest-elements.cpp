class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        if(arr.size() < k ) return vector<int>();
        int left=0,right=arr.size()-k;
        while(left < right)
        {
            int mid = (left+right) >> 1;
            if((x-arr[mid]) > (arr[mid+k]-x))
            {
                left = mid+1;
            }
            else
            {
                right = mid;
            }
        }
       
        return  vector<int>(arr.begin()+left,arr.begin()+right+k);
        
    }
};