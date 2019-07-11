//Post from In and Pre 

int search(int a[], int n, int x)
{
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] == x)
            return i;
    }
    return -1;
}

int PPO(int in[], int pre[], int n)
{
    int root = search(int, n, pre[0]);
    
    if(root != 0)
        PPO(in, pre + 1, n);
    
    if(root != n - 1)
        PPO(in + root + 1, pre + root + 1, n - root - 1);
        
    cout<<pre[0]<<" ";
}
