void generate(int n,vector<string> &ret,string str,int left,int add)
{
    if(str.size()==add)
    {
        ret.push_back(str);
        return;
    }
    if(left>0)
    {
        if(left+1<=n-1)
        {
            generate(n-1,ret,str+'(',left+1,add);
        }
        generate(n-1,ret,str+')',left-1,add);
    }
    else
        generate(n-1,ret,str+'(',left+1,add);
    return;
    
}
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ret;
        if(n==0)
            return ret;
        string str="";
        int left=0;
        int add=2*n;
        generate(2*n,ret,str,left,add);
        return ret;
    }
};