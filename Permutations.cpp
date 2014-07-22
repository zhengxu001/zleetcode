//解法一，调用STL
class Solution {
public:
    vector<vector<int> > permute(vector<int> &num) {
        vector<vector<int> > result;
        if (num.size() == 0) return result;
        std::sort(num.begin(), num.end());
        do {
            result.push_back(num);
        } while (std::next_permutation(num.begin(), num.end()));
        return result;
    }
};
//解法二
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
        swap(num[i],num[from]);
        permutation(num,from+1,to,ret);
        swap(num[i],num[from]);
    }
}
class Solution {
public:
    vector<vector<int> > permute(vector<int> &num) {
        
        vector<vector<int>> ret;
        int n = num.size();
        permutation(num,0,n-1,ret);
        return ret;
    }
};