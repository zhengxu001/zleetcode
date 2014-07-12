/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Traversal(TreeNode *root,vector<int> &ret)
{
    if(root->left!=NULL)
        ret.push_back(Traversal(root->left,ret));
    if(root->right!=NULL)
        ret.push_back(Traversal(root->right,ret));
    return root->val;
}


class Solution {
public:
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> ret;
        if(root==NULL)
            return ret;
        ret.push_back(Traversal(root,ret));
        return ret;
    }
};