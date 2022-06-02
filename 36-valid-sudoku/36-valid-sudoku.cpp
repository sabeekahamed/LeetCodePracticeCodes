class Solution {
    
    bool isValidCell(const int&_i,const int&_j,const vector<vector<char>>& board)
    {
        
        //validate in current row
        for(int i=_j+1;i<9;i++)
        {
            if(board[_i][_j] == board[_i][i])
            {
                return false;   
            }
        }
        //validate in current column
        for(int i=_i+1;i<9;i++)
        {
            if(board[_i][_j] == board[i][_j])
            {
                return false;   
            }
        }
        //validate in current 3X3 matrix
        int curRow = (_i/3) * 3 ,curCol = (_j/3) * 3;
        for(int i=curRow;i<curRow+3;i++)
        {
            for(int j=curCol;j<curCol+3;j++)
            {
                if(!(i==_i && j==_j))
                {
                    if(board[i][j] == board[_i][_j])
                    {
                        return false;   
                    }
                }
            }
        }
        return true;
        
    }
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j] != '.' && !isValidCell(i,j,board))
                {
                    return false;
                }
            }
        }
        return true;
        
    }
};