class Solution {
public:
    char *strStr(char *haystack, char *needle) {
        int hayLen = strlen(haystack);
        int needLen = strlen(needle);
        
        for(int i = 0; i <= hayLen - needLen; i++)
        {
            char *p = haystack + i;
            char *q = needle;
            while(*q != '\0')
            {
                if (*p != *q)
                    break;
                else
                {
                    p++;
                    q++;
                }
            }
            
            if (*q == '\0')
                return haystack + i;
        }
        
        return NULL;
    }
};