class Solution {
public:
    bool isValid(string s) {
        if(s.size()==0)
            return true;
        stack<char> str;
        int i=0;
        while(i<s.size())
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            {
                str.push(s[i]);
                i++;
                continue;
            }
            if(s[i]==')'||s[i]==']'||s[i]=='}')
            {
                if(!str.empty())
                {
                    if(str.top()=='('&&s[i]==')')
                    {
                        str.pop();
                        i++;
                        continue;
                    }
                    if(str.top()=='['&&s[i]==']')
                    {
                        str.pop();
                        i++;
                        continue;
                    }
                    if(str.top()=='{'&&s[i]=='}')
                    {
                        str.pop();
                        i++;
                        continue;
                    }
                    return false;
                }
                else
                    return false;
            }
        }
        if(str.empty())
            return true;
        else
            return false;
    }
};