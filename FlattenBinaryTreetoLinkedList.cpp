/**
 * Definition for binary tree
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
public:
    void build(TreeNode* n)
    {
        if (!n) return;
        
        if (n->left)
        {
            build(n->left);
            TreeNode* cur = n->left;
            while (cur->right)
            {
                cur = cur->right;
            }
            
            cur->right = n->right;
            n->right = n->left;
            n->left = NULL;
            build(cur->right);
        }
        
        build(n->right);
        return;
    }
    
    void flatten(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        build(root);
    }
    
    
    
};