bool hasPathSum(Node *node, int sum)
{
    if(!node)
        return (sum == 0);
    else
    {
        bool ans = 0;
        
        int subSum = sum - node->data;
        
        if(subSum == 0 && !node->left &&!node->right)
            return 1;
        if(node->left)
            ans = ans || hasPathSum(node->left, subSum);
        if(node->right)
            ans = ans || hasPathSum(node->right, subSum);
            
        return ans;
    }
    
}
