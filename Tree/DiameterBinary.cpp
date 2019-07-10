//Diameter of a BT 

int dia(Node *root, int &height)
{
    if(!root)
    {
        height = 0;
        return 0;
    }
    
    int lh = 0, rh = 0;
    int ld = dia(root->left, lh);
    int rd = dia(root->right, rh);
    
    height = max(lh, rh) + 1;
    
    return (max(lh + rh + 1, max(ld, rd)));
}
