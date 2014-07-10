class Solution {
public:
    int maxProfit(vector<int> &prices) {
        if (prices.size() == 0)
            return 0;
        int a[prices.size()-1];
        int b[prices.size()-1];
        int minPrice = prices[0];
        int maxPrice = prices[prices.size()-1];
        int ans1 = 0;
        int ans2 = 0;
        int ret=0;
        for(int i = 0; i <=prices.size() - 1; i++)
        {
            minPrice = min(minPrice, prices[i]);
            ans1 = max(ans1,prices[i]-minPrice);
            a[i] = ans1;
        }
        for(int j=prices.size()-1;j>=0;j--)
        {
            maxPrice = max(maxPrice, prices[j]);
            ans2 = max(ans2,maxPrice-prices[j]);
            b[j] = ans2;
        }
        for(int i=0;i<prices.size()-1;i++)
        {
            if(a[i]+b[i]>ret)
                ret=a[i]+b[i];
        }
        return ret;
    }
};