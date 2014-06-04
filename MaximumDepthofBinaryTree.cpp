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
    int maxDepth(TreeNode *root) {
        if(root==NULL)
            return 0;
        int max=0;
        int rmax = maxDepth(root->right);
        int lmax = maxDepth(root->left);
        max+=rmax>lmax?rmax:lmax;
        max+=1;
        return max;
    }
};