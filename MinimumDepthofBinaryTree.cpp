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
    int leftmax=0;
    int rightmax=0;
    int minDepth(TreeNode *root) {
        int min=0;
        if(root==NULL)
            return min;
        min+=1;
        if(root->right==NULL)
        {
            min+=minDepth(root->left);
            return min;
        }
        if(root->left==NULL)
        {
            min+=minDepth(root->right);
            return min;
        }
        int lf=minDepth(root->left);
        leftmax+=lf;
        int rt=minDepth(root->right);
        rightmax+=rt;
        min+=lf<rt?lf:rt;
        if(leftmax==0)
            min+=rightmax;
        if(rightmax==0)
            min+=leftmax;
        return min;
    }
};
