class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int colSize = obstacleGrid[0].size() , rowSize = obstacleGrid.size();
        vector<vector<int> > dp(rowSize,vector<int>(colSize,0));
        bool obstacleNotpre(true);
        for(int i=0;i<rowSize;i++)
        {
            if(obstacleNotpre && obstacleGrid[i][0] == 0)
            {
                dp[i][0]=1;
            }
            else
            {
                obstacleNotpre = false;
                dp[i][0]=0;
            }
        }
        obstacleNotpre = true;
        for(int i=0;i<colSize;i++)
        {
            if(obstacleNotpre && obstacleGrid[0][i] == 0)
            {
                dp[0][i]=1;
            }
            else
            {
                obstacleNotpre = false;
                dp[0][i]=0;
            }
        }
       
        for(int i=1;i<rowSize;i++)
        {
            for(int j=1;j<colSize;j++)
            {
               if(obstacleGrid[i][j] == 0)
               {
                   dp[i][j] = dp[i-1][j] + dp[i][j-1];
               }
            }
        }
        return dp[rowSize-1][colSize-1];
    }
};