class Solution {
public:
    int titleToNumber(string columnTitle)
    {
        int n = columnTitle.length();
        if(n == 1)
            return (columnTitle[0] - 'A') + 1;
        int ans = 0;
        int increment = 0;
        for(int i = n-1; i >= 0; i--)
        {
            int x = (columnTitle[i] - 'A') + 1;
            ans += x * pow(26, increment);
            increment++;
        }
        return ans;
    }
};