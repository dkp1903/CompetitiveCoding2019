//Nodes between two given levels

void print(Node*root, int low, int high)
{
    if(!root)
        return;
    
    Node *marker = new Node;
    queue<Node*>q;
    //Initial level is 1 
    int level = 1;
    q.push(root);
    //Marker delimits levels
    q.push(marker);
    
    while(!q.empty())
    {
        Node *node = q.front();
        q.pop();
        //End of current level reached
        if(node == marker)
        {
            cout<<"\n";
            level++;
            //All nodes which needed to be visited are visited
            if(q.empty() || level > high)
                break;
            q.push(marker);
            
            continue;
        }
        
        if(level >= low)
            cout<<node->data<<" ";
        
        if(node->left)
            q.push(node->left);
        if(node->right)
            q.push(node->right);
    }
}
