class Solution {
    bool HaveCommonLetter(const string&s1,const string&s2)
    {
        for(char c1 : s1)
        {
            for(char c2 : s2)
            {
                if( c1==c2 )
                    return true;
            }
        }
        return false;
    }
    int max(const int&a,const int&b)
    {
        return a > b ? a : b;
    }
public:
    int maxProduct(vector<string>& words) {
        vector<int> check(words.size());
        int maxV=0;
        for(int i=0;i<words.size();i++)
        {
            int num=0;
            for(int j=0;j<words[i].length();j++)
            {
                int x=words[i][j] -'a';
                num|= 1<<x;
                
            }
            check[i] = num;
        }
        
        for(int i=0;i<words.size();i++)
        {
            for(int j=i+1;j<words.size();j++)
            {
                if((check[i]&check[j]) == 0)
                {
                    maxV = max(maxV,words[i].length() * words[j].length());
                }
            }
        }
        
        
        return maxV;

        /*
        long long maxValue = 0;
        for(int i=0;i<words.size();i++)
        {
            long curValue = words[i].length();
            string curStr = words[i];
            for(int j=i+1;j<words.size();j++)
            {
                if(!HaveCommonLetter(curStr,words[j]))
                {
                    curValue *= words[j].length();
                    curStr += words[j];
                }
            }
            if(maxValue < curValue)
                maxValue = curValue;
        }
        return maxValue;
        */
    }
};