
class Solution {
public:
    string multiply(string num1, string num2) {
        int pass = 0;
        if(num1[0]=='0'||num2[0]=='0')
            return "0";
        string str(num1.size()+num2.size()-1,'0');
        for(int i=num1.size()-1;i>=0;i--)
        {
            for(int j=num2.size()-1;j>=0;j--)
            {
                int end=((num1[i]-'0')*(num2[j]-'0')+pass+(str[i+j]-'0'))%10;
                pass=((num1[i]-'0')*(num2[j]-'0')+pass+(str[i+j]-'0'))/10;
                str[i+j]=(char)(end+'0');
            }
            if(pass!=0)
            {
                if(i!=0)
                {
                    str[i-1]=(char)(pass+'0');
                    pass=0;
                }
                else
                {
                    str=(char)(pass+'0')+str;
                    break;
                }
            }
            
        }
        return str;
    }
};