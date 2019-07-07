int minValue(Node* root)
{
    if(!root)
        return -1;
    queue<Node*>q;
    int min = INT_MAX, t;
    Node* curr = root;
    q.push(root);
    while(!q.empty())
    {
        curr = q.front();
        q.pop();
        t = curr->data;
        if(t < min)
            min = t;
        if(curr->left)
            q.push(curr->left);
        if(curr->right)
            q.push(curr->right);
    }
    return min;
    
}
