class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(s.length() < k) return false;
        set<string> subStrs;
        for(int i=0;i <= s.length()-k;i++)
            subStrs.insert(s.substr(i,k));
        return subStrs.size() == std::pow(2,k);
    }
};