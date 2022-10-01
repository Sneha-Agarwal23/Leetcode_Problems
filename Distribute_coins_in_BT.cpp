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
    int postorder(TreeNode* root)
    { 
        if(root->left != NULL)
            root->val += postorder(root->left);
        
        if(root->right != NULL)
            root->val += postorder(root->right);
        
        int temp = root->val - 1;
        ans += abs(temp);
        return temp;
        
    }
    int distributeCoins(TreeNode* root)
    {
        postorder(root);
        return ans;
        
    }
};