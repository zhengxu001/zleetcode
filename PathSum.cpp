/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    bool add(TreeNode *root,int k,int sum)
    {
        if(root==NULL)
            return false;
        k += root->val;
        if(k==sum&&root->left==NULL&&root->right==NULL)
            return true;
        
        return add(root->left, k,sum)||add(root->right, k,sum);
    }
    
    bool hasPathSum(TreeNode *root, int sum) {
        
        if(root==NULL)
            return false;
        if(root->val==sum&&root->left==NULL&&root->right==NULL)
            return true;
        
        return add(root->left, root->val, sum)||add(root->right, root->val, sum);
    }
    
};