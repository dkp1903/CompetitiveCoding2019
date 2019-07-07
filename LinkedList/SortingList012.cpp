Node* segregate(Node *head) 
{
    Node *zeroH  =new Node(-1), *oneH = new Node(-1), *twoH = new Node(-1);
    Node *zeroT = zeroH, *oneT = oneH, *twoT = twoH;    
    
    Node *curr = head;
    while(curr)
    {
        if(curr->data == 0)
        {
            zeroT->next = curr;
            zeroT = zeroT->next;
        }
        else if(curr->data == 1)
        {
            oneT->next = curr;
            oneT = oneT->next;
        }
        else
        {
            twoT->next = curr;
            twoT = twoT->next;
        }
        curr = curr->next;
    }
    if(oneH->next)
    {
        zeroT->next = oneH->next;
    
        oneT->next = twoH->next;
    }
    else
        zeroT->next = twoH->next;
    
    twoT->next = NULL;
    head = zeroH->next;
    return head;
    
}
