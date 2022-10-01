class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) 
    {
        unordered_map<int, int> m;
        m[1] = costs[0];
        m[7] = costs[1];
        m[30] = costs[2];
        vector<int> dp(366, INT_MAX);
        dp[0] = 0;
        for(int i = 1; i < 366; i++)
        {
            if(find(days.begin(), days.end(), i) == days.end())
            {
                dp[i] = dp[i-1];
                continue;
            }
            for(auto j : m)
            {
                dp[i] = min(dp[i], dp[max(0,i-j.first)] + j.second);
            }
        }
        return dp[365];
        
    }
};