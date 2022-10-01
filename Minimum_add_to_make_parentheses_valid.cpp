class Solution {
public:
    int minAddToMakeValid(string s) 
    {
        int n = s.length();
        int ans = 0;
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '(')
                count++;
            else
                count--;
            if(count < 0)
            {
                ans += abs(count);
                count = 0;
            }
        }
        ans += abs(count);
        return ans;
        
    }
};