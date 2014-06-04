class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        int max=0;
        for(int i=0;i<n;i++)
        {
            if(A[i]==elem)
                max++;
            else
                A[i-max]=A[i];
        }
        return n-max;
    }
};