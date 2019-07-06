//Recursive method to find height of binary tree

//Here height means the number of nodes from the root to the deepest node 


int height(Node *root)
{
    //If no root, no nodes. Therefore, height = 0;
    if(!root)
        return 0;
        
    
    int c = 0;
    //Recursive call for left and right subtrees
    int l = height(root->left);
    int r = height(root->right);
    
    //Height means the deepest, and hence we take the larger of l and r 
    //+1 is done to count the current node 
    if(l > r)
        c = l + 1;
    else
        c = r + 1;
    return c;
}
