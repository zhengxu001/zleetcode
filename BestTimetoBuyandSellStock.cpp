class Solution {
public:
    int maxProfit(vector<int> &prices) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if (prices.size() == 0)
            return 0;
        
        int maxPrice = prices[prices.size()-1];
        int ans = 0;
        for(int i = prices.size() - 1; i >= 0; i--)
        {
            maxPrice = max(maxPrice, prices[i]);
            ans = max(ans, maxPrice - prices[i]);
        }
        
        return ans;
    }
};