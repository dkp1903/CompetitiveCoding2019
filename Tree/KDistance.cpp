// function should print the nodes at k distance from root
void printKdistance(Node *root, int k)
{
    if(!root)
        return;
    if(k == 0)
    {
        cout<<root->data<<" ";
    }
    else
    {
        //if(root->left)
        printKdistance(root->left, k-1);
        //if(root->right)
        printKdistance(root->right, k-1);
         return;
    }
   
}
