class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sizeOfnum = nums.size() + 1,sumOfnums=0;
        for(int i : nums)
            sumOfnums += i;
        return (sizeOfnum*(sizeOfnum-1) >>1 ) - sumOfnums;
    }
};