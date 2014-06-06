class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int a[50];
        int i=0;
        while(x>0)
        {
            a[i++] = x%10;
            x/=10;
        }
        for(int j=0;j<i/2;j++)
        {
            if(a[j]!=a[i-j-1])
                return false;
        }
        return true;
    }
};