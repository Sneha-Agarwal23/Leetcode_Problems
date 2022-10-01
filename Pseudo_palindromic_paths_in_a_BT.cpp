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
    unordered_map<int,int> m;
    void dfs(TreeNode* root)
    {
        if(root == NULL)
            return;
        
        m[root->val]++;
        if(root->left == NULL && root->right == NULL)
        {
            int odd = 0;
            for(auto i : m)
            {
                if(i.second % 2 == 1)
                    odd++;
            }
            if(odd <= 1)
                ans++; 
        }
        dfs(root->left);
        dfs(root->right);
        m[root->val]--;
        
    }
    int pseudoPalindromicPaths (TreeNode* root)
    {
        dfs(root);
        return ans; 
        
    }
};