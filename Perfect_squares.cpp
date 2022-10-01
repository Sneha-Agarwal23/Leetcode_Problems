class Solution {
public:
    int numSquares(int n) 
    {
        vector<int> dp(n+1, INT_MAX);
        dp[0] = 0;
        int x = 1;
        while(x*x <= n)
        {
            int sq = x * x;
            for(int i = sq; i < n+1; i++)
            {
                dp[i] = min(dp[i], dp[i-sq] + 1);
            }
            x++;
        }
        return dp[n];
    }
};