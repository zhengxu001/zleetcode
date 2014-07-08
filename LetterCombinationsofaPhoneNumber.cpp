void letterCo(vector<string> &ret,string bf,string digits,int n)
{
    if(n>digits.size()-1)
        return;
    string str[10];
    str[2]="abc";
    str[3]="def";
    str[4]="ghi";
    str[5]="jkl";
    str[6]="mno";
    str[7]="pqrs";
    str[8]="tuv";
    str[9]="wxyz";
    if(n==digits.size()-1)
    {
        if(digits[n]=='7')
        {
            ret.push_back(bf+'p');
            ret.push_back(bf+'q');
            ret.push_back(bf+'r');
            ret.push_back(bf+'s');
        }
        else if(digits[n]=='9')
        {
            ret.push_back(bf+'w');
            ret.push_back(bf+'x');
            ret.push_back(bf+'y');
            ret.push_back(bf+'z');
        }
        else
        {
            for(int i=0;i<3;i++)
            {
                ret.push_back(bf+str[digits[n]-'0'][i]);
            }
        }
        return ;
    }
    if(digits[n]=='7')
    {
        letterCo(ret,bf+'p',digits,n+1);
        letterCo(ret,bf+'q',digits,n+1);
        letterCo(ret,bf+'r',digits,n+1);
        letterCo(ret,bf+'s',digits,n+1);
        return ;
    }
    else if(digits[n]=='9')
    {
        letterCo(ret,bf+'w',digits,n+1);
        letterCo(ret,bf+'x',digits,n+1);
        letterCo(ret,bf+'y',digits,n+1);
        letterCo(ret,bf+'z',digits,n+1);
        return ;
    }
    else
    {
        for(int i=0;i<3;i++)
        {
            letterCo(ret,bf+str[digits[n]-'0'][i],digits,n+1);
        }
    }
    return ;
}


class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ret;
        if(digits.size()==0)
        {
            ret.push_back("");
            return ret;
        }
        string bf="";
        letterCo(ret,bf,digits,0);
        return ret;
        
        
    }
};