/*The function below returns an int denoting
the length of the longest palindrome list. */
int countCom(Node*a, Node*b)
{
    int count = 0;
    for(; a && b; a = a->next, b = b->next)
    {
        if(a->data == b->data)
            ++count;
        else
            break;
            
    }
    return count;
}

int maxPalindrome(Node *head)
{
    Node *curr = head;
    Node *prev = NULL, *next = NULL;
    int result = 0;
    
    while(curr)
    {
        next = curr->next;
        curr->next = prev;
        
        result = max(result, 2*countCom(prev, next) + 1);
        result = max(result, 2*countCom(curr, next));
        
        prev = curr;
        curr = next;
    }
    
    return result;
}
