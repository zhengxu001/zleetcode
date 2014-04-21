#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
using namespace std;

void reverseWords(string &s)
{
        vector<string> sum;
        string str;
        int i = 0;
        int n =s.size();
        while(s[i]!='\0'&&i<=n){
            while(s[i]==' ')
            i++;
            while(s[i]!=' '&&s[i]!='\0')
            {
                str+=s[i];
                i++;
            }
            sum.push_back(str);
            str="";
        }
        s="";
        for (vector<int>::size_type ix = sum.size()-1; ix > 0; --ix){
            s+=sum[ix];
            s+=' ';
        }
        s+=sum[0];
}
int main(int argc, char const *argv[])
{
	string s = "the sky is blue";
	reverseWords(s);
	printf("The Result is:\n");
	cout<<s<<endl;
	return 0;
}