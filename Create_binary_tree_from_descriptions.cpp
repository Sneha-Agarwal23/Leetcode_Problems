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
    unordered_map<int, int> lchild;
    unordered_map<int, int> rchild;
    
    TreeNode* dfs(int value)
    {
        TreeNode* root = new TreeNode(value);
        if(lchild.count(value) != 0)
        {
            root->left = dfs(lchild[value]);
        }
        if(rchild.count(value) != 0)
        {
            root->right = dfs(rchild[value]);
        }
        return root;
    }
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) 
    {
        unordered_set<int>s;
        for(auto i : descriptions)
        {
            s.insert(i[1]);
            if(i[2] == 1)
                lchild[i[0]] = i[1];
            else
                rchild[i[0]] = i[1];
        }
        int root;
        for(auto i : descriptions)
        {
            if(!s.count(i[0]))
            {
                root = i[0];
                break;
            }
        }
        return dfs(root);
    }
};