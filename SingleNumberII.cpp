http://blog.csdn.net/jiadebin890724/article/details/23306837
class Solution {
public:
    int singleNumber(int A[], int n) {
        int bitnum[32]={0};
        int res=0;
        for(int i=0; i<32; i++){
            for(int j=0; j<n; j++){
                bitnum[i]+=(A[j]>>i)&1;
            }
            res|=(bitnum[i]%3)<<i;
        }
        return res;
    }
};