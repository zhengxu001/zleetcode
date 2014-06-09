void PreOder(TreeNode *root)
{
    if(root=NULL)
	return;
    std::stack<TreeNode*> s;
    while(root!=NULL)
    {
	s.push(root);
	cout<<root->val;
	root=root->left;
    }
    wihle(!s.empty())
    {
	TreeNode *temp = s.top()->right;
	s.pop();
	while(temp)
	{
	    cout<<temp->val;
	    s.push(temp);
	    temp = temp->left;
	}
    }
}

void PreOrder(TreeNode *root)
{
    if(root==NULL)
	return;
    stack<TreeNode *> s;
    s.push(root);
    while(!s.empty())
    {
	TreeNode *temp = s.top();
	cout<<temp->val<<" ";
	s.pop();
	if(temp->right!=NULL)
	    s.push(temp->right);
	if(temp->left!=NULL)
	    s.push(temp->left);
    }
}

















