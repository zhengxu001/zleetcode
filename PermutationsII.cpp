
bool IsSwap(vector<int> &num,int from ,int to)
{
    bool ret=false;
    for(int i=from;i<to;i++)
    {
        if(num[i]==num[to])
            ret=true;
    }
    return ret;
}
void permutation(vector<int> &num,int from,int to,vector<vector<int>> &ret)
{
    if(from==to)
    {
        vector<int> one;
        for(int i=0;i<num.size();i++)
        {
            one.push_back(num[i]);
        }
        ret.push_back(one);
        return;
    }
    for(int i=from;i<=to;i++)
    {
        if(IsSwap(num,from,i))
            continue;
        swap(num[i],num[from]);
        permutation(num,from+1,to,ret);
        swap(num[i],num[from]);
    }
}
class Solution {
public:
    vector<vector<int> > permuteUnique(vector<int> &num) {
        
        vector<vector<int> > ret;
        permutation(num,0,num.size()-1,ret);
        return ret;
    }
};