class Solution {
public:
    void dp(vector<string>& ans, string s, int n, int start)
    {
        if(n == 0 && start == 0)
        {
            ans.push_back(s);
            return;
        }
        
        if(n > 0)
            dp(ans, s + "(", n-1, start+1);
        
        if(start > 0)
            dp(ans, s + ")", n, start-1);
            
    }
    vector<string> generateParenthesis(int n) 
    {
        vector<string> ans;
        string s = "";
        dp(ans, s, n, 0);
        return ans;
        
    }
};