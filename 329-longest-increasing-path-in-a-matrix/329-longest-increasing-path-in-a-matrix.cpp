class Solution {
    bool isSafe(const int&i,const int&j,const int&n,const int&m)
    {
        return i>=0 && i<n && j>=0 && j<m;
    }
    int TraverseAndGetMax(const vector<vector<int>>& matrix , vector<vector<int>>& lip,const int& i,const int& j,const int& n,const int& m)
    {
        if(lip[i][j] > 0) return lip[i][j];
        int max=0;
        //i+1,j
        if(isSafe(i+1,j,n,m) && matrix[i+1][j] > matrix[i][j])
        {
            max = std::max(max,TraverseAndGetMax(matrix,lip,i+1,j,n,m));
        }
        //i-1,j
        if(isSafe(i-1,j,n,m) && matrix[i-1][j] > matrix[i][j])
        {
            max = std::max(max,TraverseAndGetMax(matrix,lip,i-1,j,n,m));
        }
        
        //i,j+1
        if(isSafe(i,j+1,n,m) && matrix[i][j+1] > matrix[i][j])
        {
            max = std::max(max,TraverseAndGetMax(matrix,lip,i,j+1,n,m));
        }
        
        //i,j-1
        if(isSafe(i,j-1,n,m) && matrix[i][j-1] > matrix[i][j])
        {
            max = std::max(max,TraverseAndGetMax(matrix,lip,i,j-1,n,m));
        }
        lip[i][j] = 1+max;
        return lip[i][j];
    }
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int colSize=matrix[0].size(),rowSize=matrix.size();
        vector<vector<int> > lip(rowSize,vector<int>(colSize,0));
        int longestPathSize=0;
        for(int i=0;i<rowSize;i++)
        {
            for(int j=0;j<colSize;j++)
            {
                longestPathSize = std::max(longestPathSize,TraverseAndGetMax(matrix,lip,i,j,rowSize,colSize));   
            }
        }
        return longestPathSize;
    }
};