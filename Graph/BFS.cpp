//Breadth First Search Graph

class Graph
{
  int V;
  //No of vertices
  
  list<int>adj[V];
  //Array of lists
  
  vector<int> sol;
  //Constructor
  Graph(int V)
  {
      this->V = V;
      adj = new list<int>[V];
  }
};

void Graph::addEdge(int v, int w)
{
    //This function adds an edge between vertex v and vertex w 
    adj[v].push_back(w);
}

vector<int> Graph::BFS(int s)
{
    //BFS starting with source vertex S 
    
    bool *visited = new bool[V];
    //An array storing if each vertex has been visited or not 
    
    for(int i = 0 ; i < V ; i++)
        visited[i] = false;
        //All vertices are unvisited initially
        
    queue<int>q;
    //to facilitate BFS, storing adj nodes 
    visited[s] = true;
    //Source vertex visited first 
    queue.push_back(s);
    queue<int>::iterator it;
    
    while(!q.empty())
    {
        s = q.front();
        q.pop();
        sol.push_back(s);
    
        for(it = adj[s].begin(); it != adj[s].end(); ++it)
        {
            if(!visited[*it])
            {
                visited[*it] = true;
                q.push_back(*it);
            }
        }
    }
    
}
