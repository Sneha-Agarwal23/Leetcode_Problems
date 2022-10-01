/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans = 0;
    vector<int> dfs(TreeNode* root, int d)
    {
        vector<int> v = {};
        if(root == NULL)
            return v;
        
        auto l = dfs(root->left, d);
        auto r = dfs(root->right, d);
        if(l.size() == 0 && r.size() == 0)
        {
            v.push_back(1);
            return v;
        }
        for(auto i : l)
        {
            for(auto j : r)
            {
                if(i + j <= d)
                    ans++;
            }
        }
        for(auto i : l)
        {
            v.push_back(i+1);
        }
        for(auto j : r)
        {
            v.push_back(j+1);
        }
        return v;

    }
    int countPairs(TreeNode* root, int distance)
    {
        dfs(root, distance);
        return ans;
        
    }
};