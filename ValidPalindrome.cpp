class Solution {
public:
    bool isPalindrome(string s) {
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='a'&&s[i]<='z'))
                s[count++]=s[i];
            else if((s[i]>='A'&&s[i]<='Z'))
                s[count++]=s[i]-'A'+'a';
            else if(s[i]>='0'&&s[i]<='9')
                s[count++]=s[i];
        }
        for(int i=0;i<count/2;i++)
            if(s[i]!=s[count-1-i])
                return false;
        return true;
    }
};