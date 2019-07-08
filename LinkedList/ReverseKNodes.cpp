//Reverse every k nodes in Linked List 

Node *revK(Node * root, int k)
{
    if(!root)
        return NULL;
    Node *curr = NULL, *prev = NULL, *next = NULL;
    int count = 0;
    
    while(curr && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    
    if(next)
        head->next = revK(next, k);
        
    return prev;
    
}
