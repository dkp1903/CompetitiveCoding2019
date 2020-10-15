//code for finding mother vertex in the given graph

/*
    ->mother vertex is the vertex from which all other vertex can be visited.
    ->now if the vertex is mother vertex then it's finished time will be maximum..
    ->there may be more than one mother vertex.

*/

#include<bits/stdc++.h>
using namespace std;

class Graph
{
  long long int V;
  //No of vertices

  // Adjacency list of the given graph
  vector< vector<long long int> > adj;

  //constructor
  Graph(long long int V)
  {
      adj.assign(V, vector<long long int>());
  }

  void addEdge(long long int v,long long int u);

  long long int findMotherVertex();
  void DFS(long long int src,vector<bool> &visited);
};

void Graph::addEdge(long long int v,long long int u)
{
    //function for adding an edge between vertex v and vertex u 
    adj[v].push_back(u);
}

long long int Graph::findMotherVertex()
{
    vector<bool> visited(V,false);

    //store motheVertex in a variable
    long long int motherVertex;

    for(long long int i=1;i<=V;i++)
    {
        if(!visited[i])
        {
            DFS(i,visited);
            motherVertex = i;
        }
    }

    return motherVertex;
}

void Graph::DFS(long long int src,vector<bool> &visited)
{
    //mark the given vertex as visited
    visited[src]=true;
 
    // iterate over adjancent vertexes of the given vertex
    for(auto x:adj[src])
    {
        // If the vertex is not visited then run DFS from that vertex
        if(!visited[x])
        {
            DFS(x,visited);
        }
    }
}
