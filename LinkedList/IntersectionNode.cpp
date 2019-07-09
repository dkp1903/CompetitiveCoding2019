//Find Intersection Node of two linked Lists

Node *find(Node *A, Node *B)
{
    Node*curr = A;
    int c1 = 0, c2 = 0;
    while(curr)
    {
        c1++;
        curr = curr->next;
    }
    curr = B;
    while(curr)
    {
        c2++;
        curr = curr->next;
    }
    bool flag = false;
    
    if(c1 > c2)
    {
        flag = true;
        d = c1 - c2;
    }
    else
        d = c2 - c1;
    if(flag)//means that first is longer
        curr = A;
    else
        curr = B;
    while(d > 0)
    {
        curr = curr->next;
        d--;
    }
    Node*curr2 = B;
    while(curr && curr2)
    {
        if(curr == curr2)
            return curr;
        curr = curr->next;
        curr2 = curr2->next;
    }
    return NULL;
}
