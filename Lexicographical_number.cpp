class Solution {
public:
    void dfs(int n, vector<int>& ans, int target)
    {
        if(target > n)
            return;
        ans.push_back(target);
        dfs(n, ans , target*10);
        if(target%10 != 9)
            dfs(n, ans, target+1);
    }
    vector<int> lexicalOrder(int n) 
    {
        vector<int> ans;
        dfs(n, ans, 1);
        return ans;
        
    }
};