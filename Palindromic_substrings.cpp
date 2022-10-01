class Solution {
public:
    void check(string s, int start, int end, int &ans)
    {
        while(start >= 0 && end < s.size() && s[start] == s[end])
        {
            ans++;
            start--;
            end++;
        }
    }
    int countSubstrings(string s) 
    {
        int n = s.length();
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            check(s,i,i,ans);
            check(s,i,i+1,ans);
        }
        return ans;
        
    }
};