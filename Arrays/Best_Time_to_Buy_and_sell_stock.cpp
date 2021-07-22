class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=INT_MAX;
        int profit=0;
        for(int i=0;i<prices.size();i++)
        {
            mn=min(prices[i],mn);
            profit=max(profit,prices[i]-mn);
        }
        return profit;
    }
};
