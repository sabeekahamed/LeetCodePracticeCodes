class Solution {

private:
     vector<int> getFreq(const vector<int> &nums)
     {
        vector<int>freq(1001,0);
        for(int el: nums)
        {
            freq[el]++;
        }
        return freq;
     }
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
          
        vector<int> freq1 = getFreq(nums1);
        vector<int> freq2 = getFreq(nums2);
        vector<int>ans;
        for(int i=0;i<freq1.size();i++){
            int count = std::min(freq1[i], freq2[i]);
            while(count-- > 0){
                ans.push_back(i);
            }
        }

        vector<int>res(ans.size());
        for(int i=0;i<ans.size();i++){
            res[i] = ans[i];
        }
        return res;
        
        /*
        map<int,int> intersectMap;
        vector<int>ansVect(nums2.size());
        for(int i=0;i<nums1.size();i++)
        {
            intersectMap[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            auto it = intersectMap.find(nums2[i]);
            if(it!=intersectMap.end() && it->second > 0)
            {
                ansVect.push_back(nums2[i]);
                it->second--;
            }
        }
        return ansVect;*/
    }
};