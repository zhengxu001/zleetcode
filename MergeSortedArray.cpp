class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        m--;
        n--;
        if(n<0)
            return;
        int pointer=m+n+1;
        while(m>=0&&n>=0)
            A[pointer--]=A[m]>B[n]?A[m--]:B[n--];
        while(n>=0)
            A[pointer--]=B[n--];
        while(m>=0)
            A[pointer--]=A[m--];
        
        return;
    }
};