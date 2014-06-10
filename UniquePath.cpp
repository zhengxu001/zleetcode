//最先想到递归啊，直接超时，递归会浪费比较多的时间和压栈空间啊......

//递归代码如下：超时
class Solution {
public:
    int findmax(int a,int b)
    {
        int max=0;
        if(a==0&&b==0)
            return 0;
        if(a==1||b==1)
            return 1;
        max = findmax(a-1,b) + findmax(a,b-1);
        return max;
    }
    
    int uniquePaths(int m, int n) {
        return findmax(m,n);
    }
};


//正常写循环，秒过......
class Solution {
public:
    int uniquePaths(int m, int n) {
        int a[101][101];
        for(int i=1;i<=m;i++)
            a[i][1]=1;
        for(int i=1;i<=n;i++)
            a[1][i]=1;
        for(int i=1;i<=m;i++)
            for(int j=1;j<=n;j++)
                if(i>1&&j>1)
                    a[i][j] = a[i-1][j]+a[i][j-1];
        return a[m][n];
    }
};
