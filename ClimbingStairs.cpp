class Solution {
public:
    int climbStairs(int n) {
        if(n==0)
            return 0;
        if(n==1||n==2)
            return n;
        int A[1000];
        A[1]=1;
        A[2]=2;
        for(int i=3;i<=n;i++)
        {
            A[i]=A[i-1]+A[i-2];
        }
        return A[n];
    }
};