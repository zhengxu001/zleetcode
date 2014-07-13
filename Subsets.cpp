class Solution {
public:
    vector<vector<int> > subsets(vector<int> &S) {
        vector<vector<int>> ret(1, vector<int>());
        sort(S.begin(),S.end());
        int n=S.size();
        if(n==0)
            return ret;
        for(int i=0;i<n;i++)
        {
            int m = ret.size();
            for(int j=0;j<m;j++)
            {
                vector<int> current=ret[j];
                current.push_back(S[i]);
                ret.push_back(current);
            }
        }
        return ret;
    }
};