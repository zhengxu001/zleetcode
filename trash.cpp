 /**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 vector<vector<int> > zigzagLevelOrder(TreeNode *root) 
 {
    vector<vector<int>> ans;
    if(NULL==root)
    {
        return ans;
    }

    queue<TreeNode*> que;
    que.push(root);
    que.push(NULL);

    bool l2r = true;

    vector<int> level;

    while(true)
    {
        TreeNode *cur = que.front();
        que.pop();
        if(cur)
        {
            level.push_back(cur->var);
            if(cur->left) 
            {
                que.push(cur->left);
            }
            if(cur->right)
            {
                que.push(cur->right);
            }
        } 
        else
        {
            if(l2r)
            {
                ans.push_back(level);
            }
            else
            {
                vector<int> temp;
                for(int i = level.size()-1;i>=0;--i)
                {
                    temp.push_back(level[i]);
                }
                ans.push_back(temp);
            }
        
            level.erase(level.begin(), level.end());
            l2r = !l2r;
            if(que.size()==0) break;
            que.push_back(NULL);
        }
    }
    return ret;
}