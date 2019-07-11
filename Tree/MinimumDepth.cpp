//Minimum Depth in a BT 

int minDepth(Node* root)
{
    if(!root)
        return 0;
    queue<pair<int, Node*>>q;
    int depth = 0;
    q.push({0, root});
    Node *n;
    int pDepth;
    while(!q.empty())
    {
        n = q.front().second;
        pDepth = q.front().first;
        q.pop();
        
        if(!n->left && !n->right)
            return pDepth;
        if(n->left)
            q.push({pDepth + 1, n->left});
        
        if(n->right)
            q.push({pDepth + 1, n->right});
    }
}
