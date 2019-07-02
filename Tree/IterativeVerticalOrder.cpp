//Iterative Vertical Order Traversal in Binary Tree

#include<bits/stdc++.h>
using namespace std;

vector<int> printVerticalOrder(Node *root)
{
    vector<int>sol;
    if(!root)
        return sol;
    
    //q stores pairs Node->HD , where HD means the horizontal distance
    queue<pair<Node*, int>> q;
    int hd = 0;
    //m maps, a particular hd to a vector of all nodes at that HD 
    map<int, vector<int>> m;
    q.push_back(hd, root);
    Node *temp, node;
    while(!q.empty())
    {
        temp = q.front();
        q.pop();
        //hd holds the HD of the node being considered in the present iteration
        hd = temp->second;
        //node contains the node being considered 
        node = temp->first;
        m[hd].push_back(node->data);
        
        if(node->left)
            q.push_back(make_pair(node->left, hd - 1));
            
        if(node->right)
            q.push_back(make_pair(node->right, hd + 1));
    }
    
    //At the end of this, m will hold hd->vector for all HDs 
    
    for(auto it: m.begin(); it != m.end(); ++it)
    {
        for(int i = 0; i < it->second.size(); ++i)
            sol.push_back(it->second[i]);
    }
}
