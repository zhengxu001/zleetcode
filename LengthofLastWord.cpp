class Solution {
public:
    int lengthOfLastWord(const char *s) {
        if(s==NULL||strlen(s)==0)  //注意要点：NULL与""不一样，一个是没分配内存，一个是空串.
            return 0;
        int i=0;
        for(i=0;s[i]!='\0'&&i<strlen(s);i++)
        {
            ;
        }
        i--;
        int j=i;
        while(s[j]==' ')
        {
            j--;
            i--;
        }
        for(;s[j]!=' '&&j>=0;j--)
        {
            ;
        }
        return i-j;
    }
};