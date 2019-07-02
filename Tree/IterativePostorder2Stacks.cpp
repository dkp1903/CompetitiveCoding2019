//Iterative Postorder using 2 stacks

vector<int> itPost(Node *root)
{
    if(!root)
        return;
    stack<Node*>s1, s2;
    vector<int>sol;
    s1.push(root);
    Node *t;
    
    while(!s1.empty())
    {
        t = s1.top();
        s1.pop();
        
        s2.push(t);
        
        if(t->left)
            s1.push(t->left);
        if(t->right)
            s1.push(t->right);
    }
    
    while(!s2.empty())
    {
        sol.push_back(s2.top());
        s2.pop();
    }
    return sol;
    
}
