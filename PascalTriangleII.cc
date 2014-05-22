class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<int> t1(rowIndex+1);
        vector<int> t2(rowIndex+1);
        
        t1[0] = t2[0] = 1;
        for(int i=1; i<=rowIndex; i++){
            t2[0] = 1;
            for(int j = 1; j<(i+2)/2; j++)
                t2[j] = t1[j] + t1[j-1];
            
            for(int j=(i+2)/2,k= (i+1)/2 -1; j<i+1; j++, k--)
                t2[j] = t2[k];
            
            for(int j=0; j<=i; j++)
                t1[j] = t2[j];
        }
        return t2;
        
    }
};