class Solution {
public:
    bool isValidSudoku(vector<vector<char> > &board) {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                for(int k=j+1;k<9;k++)
                {
                    if(board[i][j]==board[i][k]&&board[i][k]!='.'&&board[i][j]!='.')
                        return false;
                }
            }
        }
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                for(int k=j+1;k<9;k++)
                {
                    if(board[j][i]==board[k][i]&&board[k][i]!='.'&&board[j][i]!='.')
                        return false;
                }
            }
        }
        for(int m=0;m<9;m+=3)
        {
            for(int n=0;n<9;n+=3)
            {
                for(int i=m;i<m+3;i++)
                {
                    for(int j=n;j<n+3;j++)
                    {
                        for(int k=m;k<m+3;k++)
                        {
                            for(int p=j+1;p<n+3;p++)
                            {
                                if(board[i][j]==board[k][p]&&board[i][j]!='.')
                                    return false;
                            }
                        }
                    }
                }
            }
        }
        return true;
    }
};