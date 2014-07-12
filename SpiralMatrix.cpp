class Solution {
public:
    vector<int> spiralOrder(vector<vector<int> > &matrix) {
        vector<int> ret;
        int n=matrix.size();
        if(n==0)
            return ret;
        if(n==1)
            return matrix[0];
        int m=matrix[0].size();
        if(m==0)
            return ret;
        if(m==1)
        {
            for(int i=0;i<matrix.size();i++)
                ret.push_back(matrix[i][0]);
            return ret;
        }
        for(int i=0;i<(n+1)/2;i++)
        {
            for(int j=i;j<=m-1-i&&j>=0;j++)
            {
                ret.push_back(matrix[i][j]);
            }
            for(int j=i+1;j<=n-1-i;j++)
            {
                if(m-1-i>0)
                    ret.push_back(matrix[j][m-1-i]);
            }
            if(n-1-i>i)
            {
                for(int j=m-i-2;j>=i&&j>=0;j--)
                {
                    ret.push_back(matrix[n-1-i][j]);
                }
            }
            if(m-1-i>i)
            {
                for(int j=n-i-2;j>=1+i;j--)
                {
                    ret.push_back(matrix[j][i]);
                }
            }
        }
        return ret;
    }
};