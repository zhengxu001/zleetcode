//by zen 2014.04.22

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
using namespace std;

void reverseWords(string &s)
{
    if(s=="")
        return;
    vector<string> sum;
    string str;
    int i = 0;
    int n =s.size();
    while(i<n){
        while(s[i]==' '&&i<n)
            i++;
        if(i>=n)
            break;
        while(s[i]!=' '&&s[i]!='\0')
        {
            str+=s[i];
            i++;
        }
        sum.push_back(str);
        cout<<str<<"kk"<<endl;
        str="";
    }
    s="";
    if(sum.size()>0)
    {
        
        for (vector<int>::size_type ix = sum.size()-1; ix > 0; --ix){
            s+=sum[ix];
            s+=' ';
        }
        s+=sum[0];
    }
    
    
}
int main(int argc, char const *argv[])
{
	string s = " ";
	reverseWords(s);
	printf("The Result is:\n");
	cout<<s<<endl;
	return 0;
}