class Solution {
public:
    int beautySum(string s) 
    {
        int ans = 0;
        int n = s.length();
        for(int i = 0; i < n-1; i++)
        {
            vector<int> dp(26, 0);
            dp[s[i] - 'a']++;
            for(int j = i+1; j < n; j++)
            {
                dp[s[j] - 'a']++;
                int minf = INT_MAX;
                int maxf = INT_MIN;
                for(int k = 0; k < 26; k++)
                {
                    if(dp[k])
                    {
                        minf = min(minf, dp[k]);
                        maxf = max(maxf, dp[k]);
                    }
                }
                ans += maxf - minf;
            }
            
        }
        return ans;
        
    }
};