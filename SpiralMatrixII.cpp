class Solution {
public:
    vector<vector<int> > generateMatrix(int n) {
        vector<vector<int>> ret;
        if(n<0)
            return ret;
        int matrix[n][n];
        int max=0;
        for(int i=0;i<(n+1)/2;i++)
        {
            int tmp = n-1-i;
            for(int j=i;j<=tmp;j++)
                matrix[i][j]=++max;
            for(int j=i+1;j<=tmp;j++)
                matrix[j][tmp]=++max;
            for(int j=tmp-1;j>=i;j--)
                matrix[tmp][j]=++max;
            for(int j= tmp-1;j>=1+i;j--)
                matrix[j][i]=++max;
        }
        
        for(int i=0;i<n;i++)
        {
            vector<int> a;
            for(int j=0;j<n;j++)
                a.push_back(matrix[i][j]);
            
            ret.push_back(a);
        }
        return ret;
    }
};