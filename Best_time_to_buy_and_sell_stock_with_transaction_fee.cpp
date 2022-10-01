class Solution {
public:
    int maxProfit(vector<int>& prices, int fee)
    {
        int profit = 0;
        int n = prices.size();
        if(n < 2)
            return 0;
        int temp = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            int x = profit;
            profit = max(profit, temp + prices[i]);
            temp = max(temp, x - prices[i] - fee);
        }
        return profit;
    }
};