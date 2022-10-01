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
    vector<TreeNode*> sortedarray;
    void inorder(TreeNode* root)
    {
        if(root == NULL)
            return;
        
        inorder(root->left);
        sortedarray.push_back(root);
        inorder(root->right);
    }
    
    TreeNode* sortedarraytotree(int start,int end)
    {
        if(start > end)
            return NULL;
        
        int mid = (start + end)/2;
        TreeNode* root = sortedarray[mid];
        root->left = sortedarraytotree(start,mid - 1);
        root->right = sortedarraytotree(mid+1, end);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) 
    {
        inorder(root);
        return sortedarraytotree(0, sortedarray.size()-1);
    }
};