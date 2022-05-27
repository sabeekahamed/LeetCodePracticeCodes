class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> count(mat.size(),0);
        vector<int> res(k,0);
        for(int i = 0; i < mat.size(); i++) {
            int wrCount = 0;
            for(int j = 0; j < mat[0].size(); j++) {
                if(mat[i][j] == 1) wrCount++;
                else break;
            }
            count[i] = wrCount*1000 + i;
        }
        sort(count.begin(),count.end());
        
        for(int i =0; i < k; i++) res[i] = count[i]%1000;
        
        return res;   
    }
};