//Height Balanced Binary Tree

//Difference between depths of two subtrees of every node <= 1 

int cB(Node *root)
{
    //Empty tree is height balanced 
    if(!root)
        return 1;
    //Single node is height balanced 
    if(!root->right && !root->left)
        return 1;
    //If both children are present, we recur for individual subtrees
    //If either of them returns 0, that is either of the subtrees are not height balanced 
    //The entire tree will not be HB
    if(root->right && root->left)
        return min(cB(root->left), cB(root->right));
    
    //Control comes here when exactly one child exists
    
    //If only right child exists
    //If right has at least one child, tree will not be HB 
    else if(root->right)
    {
        if(root->right->right || root->right->left)
            return 0;
        return 1;
    }
    
    //If only left child exists
    //If left has at least one child, tree will not be HB
    else if(root->left)
    {
        if(root->left->left || root->left->right)
            return 0;
            
        return 1;
    }
    return 1;
}
