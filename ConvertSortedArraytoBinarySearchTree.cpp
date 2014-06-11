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
    TreeNode *buildBST(vector<int> &num,int left,int right)
    {
        int n=(right+left)/2;
        TreeNode *root = new TreeNode(num[n]);
        int r= n-1;
        int  l = n+1;
        if(r>=left)
            root->left = buildBST(num,left,r);
        if(l<=right)
            root->right = buildBST(num,l,right);
        return root;
    }
    TreeNode *sortedArrayToBST(vector<int> &num) {
        if(num.size()==0)
            return NULL;
        int n=num.size()-1;
        TreeNode *root = new TreeNode(num[n/2]);
        int r= n/2-1;
        int  l = n/2+1;
        if(r>=0)
            root->left = buildBST(num,0,r);
        if(l<=n)
            root->right = buildBST(num,l,n);
        return root;
        
    }
};