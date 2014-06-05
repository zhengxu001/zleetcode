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
    void calPath(TreeNode *root, int sum, vector<int> tmp, vector< vector<int> > &ret){
        if(root == NULL){
            return;
        }
        
        tmp.push_back(root->val);
        if(sum == root->val && root->left == NULL && root->right == NULL){
            ret.push_back(tmp);
        }
        
        calPath(root->left, sum - root->val, tmp, ret);
        calPath(root->right, sum - root->val, tmp, ret);
        
        tmp.pop_back();
    }
    
    vector<vector<int> > pathSum(TreeNode *root, int sum) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector< vector<int> > ret;
        
        if(root == NULL) {
            return ret;
        }
        
        vector<int> tmp;
        calPath(root, sum, tmp, ret);
        return ret;
    }
};