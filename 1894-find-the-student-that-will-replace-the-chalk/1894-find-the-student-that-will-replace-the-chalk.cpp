class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long numOfChalks = 0;
        for(int i : chalk)
            numOfChalks += i;
        int remainChalks = k % numOfChalks,index=0;
        while(remainChalks >= chalk[index])
        {
                 remainChalks -= chalk[index];    
                 index++;
        }
        return index;
    }
};