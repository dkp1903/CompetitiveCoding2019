UndirectedGraphNode *Solution::cloneGraph(UndirectedGraphNode *src) 
{
     map<UndirectedGraphNode*, UndirectedGraphNode*> m; 
    queue<UndirectedGraphNode*> q; 
  
    // Enqueue src node 
    q.push(src); 
    UndirectedGraphNode *node; 
  
    // Make a clone Node 
    node = new UndirectedGraphNode(src->label); 
   
    // Put the clone node into the Map 
    m[src] = node; 
    while (!q.empty()) 
    { 
        //Get the front node from the queue 
        //and then visit all its neighbours 
        UndirectedGraphNode *u = q.front(); 
        q.pop(); 
        vector<UndirectedGraphNode *> v = u->neighbors; 
        int n = v.size(); 
        for (int i = 0; i < n; i++) 
        { 
            // Check if this node has already been created 
            if (m[v[i]] == NULL) 
            { 
                // If not then create a new Node and 
                // put into the HashMap 
                node = new UndirectedGraphNode(v[i]->label); 
                
                m[v[i]] = node; 
                q.push(v[i]); 
            } 
  
            // add these neighbours to the cloned graph node 
            m[u]->neighbors.push_back(m[v[i]]); 
        } 
    } 
  
    // Return the address of cloned src Node 
    return m[src];
 
}
