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
    void  addSum(TreeNode *root, int presum, int &sum)
    {
        if(root==NULL)
            return;
        presum=presum*10+root->val;
        if(root->right==NULL&&root->left==NULL)
            sum+=presum;
        addSum(root->left,presum,sum);
        addSum(root->right,presum,sum);
    }
    int sumNumbers(TreeNode *root) {
        int sum=0;
        addSum(root,0,sum);
        return sum;
    }
};



