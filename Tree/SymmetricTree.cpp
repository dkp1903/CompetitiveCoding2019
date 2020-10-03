//Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center). 
 
 bool func(TreeNode* root1, TreeNode* root2)
    {
        if(root1==NULL && root2==NULL) return true;
        
        if(root1 && root2 && root1->val==root2->val)
            return func(root1->left, root2->right) && func(root1->right, root2->left);
        return false;
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        if(root->left==NULL && root->right==NULL) return true;
        return func(root,root);
    }
