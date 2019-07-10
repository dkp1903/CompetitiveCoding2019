int maxPathSum(Node*root, int &res)
{
    if(!root)
        return 0;
    int l = maxPathSum(root->left, res);
    int r = maxPathSum(root->right, res);
    
    int max_single = max(max(l, r) + root->data, root->data);
    
    int max_top = max(max_single, l + r + root->data);
    
    res = max(res, max_top);
    
    return max_single;
}
