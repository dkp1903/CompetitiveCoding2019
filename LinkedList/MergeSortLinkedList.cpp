void Split(Node *head, Node**front, Node **back)
{
    Node* fast = head->next;
    Node*slow = head;
    
    while(fast)
    {
        fast = fast->next;
        if(fast)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    *front = head;
    *back = slow->next;
    slow->next = NULL;
}

Node* SortedMerge(Node *a, Node *b)
{
    if(!a)
        return b;
    if(!b)
        return a;
        
    Node* result = NULL;
    
    if(a->data <= b->data)
    {
        result = a;
        result->next = SortedMerge(a->next, b);
    }
    else
    {
        result = b;
        result->next = SortedMerge(a, b->next);
    }
    
    return result;
}
Node* mergeSort(Node* head) {
    
    Node* a = NULL, *b = NULL;
    
    if(!head || !head->next)
        return head;
    Split(head, &a, &b);
    
    a=mergeSort(a);
    b=mergeSort(b);
    head=SortedMerge(a,b);
    return head;
}
