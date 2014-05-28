class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        if(target<A[0])
            return 0;
        int i;
        for(i=0;i<n;i++)
        {
            if(A[i]>=target)
                break;
        }
        return i;
    }
};