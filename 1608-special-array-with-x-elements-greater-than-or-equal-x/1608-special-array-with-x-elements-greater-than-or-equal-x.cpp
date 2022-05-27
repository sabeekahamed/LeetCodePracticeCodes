class Solution {
public:
    int specialArray(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        int arr[1001];
        memset(arr,0,1001*sizeof(int));
        for(int num : nums) 
            arr[num]++;
        int total = nums.size();
        for(int i=0;i<1001;i++)
        {
            if(i==total)    return i;
            total -= arr[i];
        }
        return -1;
    }
};