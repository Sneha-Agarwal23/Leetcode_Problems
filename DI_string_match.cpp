class Solution {
public:
    vector<int> diStringMatch(string s) 
    {
        int low = 0;
        int high = s.length();
        int n = s.length();
        vector<int> ans(n+1, 0);
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'I')
            {
                ans[i] = low;
                low++;
            }
            else
            {
                ans[i] = high;
                high--;
            }
        }
        ans[n] = low;
        return ans;
    }
};