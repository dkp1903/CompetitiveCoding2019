void linkdelete(struct node  *head, int M, int N)
{

    if(N == 0)
        return;
    int count = 0;
    node *curr = head;
    while(curr)
    {
        count = 0;
    while(count < M - 1 && curr)
    {
        curr = curr->next;
        count++;
    }
    if(!curr)
    {
        return;
    }
    //curr->next = NULL;
    node* temp = curr->next;
    count = 0;
    while(count < N - 1 && temp)
    {
        temp = temp->next;
        count++;
    }
    if(!temp)
    {
        curr->next = NULL;
        return;
    }
    curr->next = temp->next;
    curr = temp->next;
}
    return;
}
