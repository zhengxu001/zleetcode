/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void traver(TreeNode *root,vector<int> &ret)
{
    if(root==NULL)
        return;
    ret.push_back(root->val);
    traver(root->left,ret);
    traver(root->right,ret);
    return;
}

class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> ret;
        if(root==NULL)
            return ret;
        ret.push_back(root->val);
        traver(root->left,ret);
        traver(root->right,ret);
        return ret;
    }
};


//非递归解法
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
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> ret;
        if(root==NULL)
            return ret;
        stack<TreeNode*> st;
        while(root!=NULL)
        {
            ret.push_back(root->val);
            st.push(root);
            root=root->left;
        }
        while(!st.empty())
        {
            TreeNode *p=st.top();
            st.pop();
            if(p->right!=NULL)
            {
                ret.push_back(p->right->val);
                st.push(p->right);
                TreeNode *q=p->right->left;
                while(q!=NULL)
                {
                    ret.push_back(q->val);
                    st.push(q);
                    q=q->left;
                }
            }
        }
        return ret;
    }
};