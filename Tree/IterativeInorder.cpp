//Iterative Inorder traversal

#include<bits/stdc++.h>
using namespace std;


void inOrder(Node *root)
{
    if(!root)
        return;
        
    stack<Node*>s;
    Node *curr = root;
    
    while(curr || !s.empty())
    {
        while(curr)
        {
            s.push(curr);
            curr = curr->left;
        }
        
        curr = s.top();
        s.pop();
        
        cout<<curr->data<<" ";
        curr = curr->right;
    }
}
