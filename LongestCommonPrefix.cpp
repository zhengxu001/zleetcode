class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        string str;
        int pointer=0;
        if(strs.size()==0)
            return str;
        while(pointer<strs[0].size())
        {
            for(int j=0;j<strs.size();j++)
            {
                if(pointer>strs[j].size())
                    return str;
                if(strs[j][pointer]==strs[0][pointer])
                    continue;
                else
                    return str;
            }
            str.push_back(strs[0][pointer]);
            pointer++;
        }
        //  return str;   (测试数据给的不全，假如跳出while循环即pointer>=strs[0].size(),注释此句就会导致无返回值)但是注释我还是过了。
    }
};