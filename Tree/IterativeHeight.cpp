//Iterative method to find height

int height(Node *root)
{
    if(!root)
        return 0;
        
    queue<Node*> q;
    int height, nodeCount;
    Node *node;
    
    q.push(root);
    
    while(1)
    {
        nodeCount = q.size();
        //Number of nodes at current level
        
        //nodeCount will be 0 when all nodes are traversed
        //which is when we return the height
        if(nodeCount == 0)
            return height;
        //counting the current level
        height++;
        
        //traversing all nodes at current level
        while(nodeCount)
        {
            node = q.front();
            q.pop();
            //pushing children of current node 
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
                
            //decreasing count of current node 
            nodeCount--;
        }
    }
}
