class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int sizeOfArr = arr.size();
        map<double , int> doubleMap;
        for(int i=0;i<sizeOfArr;i++)
        {
            if(doubleMap.count((double)arr[i] * 2) || doubleMap.count((double)arr[i] / 2))
                return true;
            doubleMap[arr[i]] ++;
        }
        return false;
    }
};