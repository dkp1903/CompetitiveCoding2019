bool iso(Node* n1, Node* n2)
{
    if(!n1 && !n2)
        return true;
    if(n1 || n2)
        return false;
    if(n1->data != n2->data)
        return false;
    
    return((iso(n1->left, n2->left) && iso(n1->right, n2->right)) ||
    (iso(n1->left, n2->right) && iso(n1->right, n2->left)));
}
