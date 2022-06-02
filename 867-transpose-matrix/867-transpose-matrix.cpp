class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        if(matrix.size() == 1 && matrix[0].size() == 1 ) return matrix;
        int rowSize = matrix.size(),colSize = matrix[0].size();
        vector<vector<int>>retVect(colSize,vector<int>(rowSize));
        for(int i=0;i<rowSize;i++)
        {
            for(int j=0;j<colSize;j++)
            {
                if(i!=j)
                {
                   // retVect[i][j] = matrix[j][i];
                    retVect[j][i] = matrix[i][j];
                }
                else
                    retVect[i][j] = matrix[i][j];
            }
        }
        return retVect;
    }
};