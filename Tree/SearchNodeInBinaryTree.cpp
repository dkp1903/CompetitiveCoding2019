Node*search(Node *root, int key)
{
    if(!node)
        return NULL;
    if(node->data == key)
        return node;
    
    return (search(root->left, key) || search(root->right, key));
    
}   
