/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int findmax(TreeNode *root,int &maxp)
{
    if(root==NULL)
        return 0;
    int max=root->val;
    int l=findmax(root->left,maxp);
    int r=findmax(root->right,maxp);
    int maxl=l+max;
    int maxr=r+max;
    if(maxl>maxp)
        maxp=maxl;
    if(maxr>maxp)
        maxp=maxr;
    if(max>maxp)
        maxp=max;
    if(l+r+max>maxp)
        maxp=l+r+max;
    if(maxl>max)
        max=maxl;
    if(maxr>max)
        max=maxr;
    return max;
}
class Solution {
public:
    int maxPathSum(TreeNode *root) {
        int ret=-999999;
        if(root==NULL)
            return 0;
        findmax(root,ret);
        return ret;
    }
};