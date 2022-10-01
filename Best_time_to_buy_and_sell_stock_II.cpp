class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        /*int n = prices.size();
        int i = 1, buy, sell;
        int profit = 0;
        while(i < n)
        {
            for(buy = prices[i-1]; i < n && prices[i] < buy;i++)
            {
                    buy = prices[i];
            }
            if(i >= n)
                break;
            for(sell = prices[i]; i < n && sell <= prices[i]; i++)
            {
                    sell = prices[i];
            }
            profit += sell - buy;
            i++;
            
        }
        return profit;*/
        int profit = 0;
        for(int i = 1;i < prices.size();i++)
        {
            if(prices[i] > prices[i-1])
            {
                profit += prices[i] - prices[i-1];
            }
        }
        return profit;
    }
};