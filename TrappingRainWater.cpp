class Solution {
public:
    int trap(int A[], int n) {
        int max = A[0];
        int maxj = 0;
        int temp = 0;
        int end = A[0];
        int endj =0;
        for(int i=0;i<n-1;i++)
        {
            end = A[i+1];
            endj = i+1;
            for(int j=i+1;j<n;j++)
            {
                
                if(A[j]>end)
                {
                    end = A[j];
                    endj = j;
                }
                
                if(end>=max)
                {
                    
                    for(int k = maxj;k<=endj;k++)
                    {
                        if(A[k]<max)
                        {
                            temp = temp + max - A[k];
                        }
                    }
                    max = end;
                    maxj= endj;
                    i=endj-1;
                    break;
                }
                
            }
            for(int k = maxj;k<=endj;k++)
            {
                if(A[k]<end)
                {
                    temp = temp + end - A[k];
                }
            }
            i=endj-1;
            max= A[endj];
            maxj= endj;
        }
        return temp;
    }
};