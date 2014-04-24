#include <stdio.h>

    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int k[1000];
        int count = 0;
        memset(k,0,sizeof(k));
        for(int i=0;i<n;i++)
        {
            k[(int)(s[i]-'\0')]++;
        }
        for(int i=0;i<1000;i++)
        {
            if(k[i]>0)
            count++;
        }
        return count;
    }
int main(int argc, char const *argv[])
{

	stirng s =  "abcabcbb";
	//1 1 2 2 3   3   4 4  5 5 6
	printf("%d<-",lengthOfLongestSubstring(string s));
    //printf("%s\n", );
	/* code */
	return 0;
}