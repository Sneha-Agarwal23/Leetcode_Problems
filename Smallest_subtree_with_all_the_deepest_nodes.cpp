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
    int getDepth(TreeNode* root)
    {
        if(root == NULL)
            return 0;
        
        return max(getDepth(root->left), getDepth(root->right))+1;
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root)
    {
        if(root == NULL)
            return root;
        
        int rd = getDepth(root->right);
        int ld = getDepth(root->left);
        
        if(rd == ld)
            return root;
        if(rd > ld)
            return subtreeWithAllDeepest(root->right);
        return subtreeWithAllDeepest(root->left);
        
    }
};