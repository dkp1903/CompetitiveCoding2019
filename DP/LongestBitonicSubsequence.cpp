int Solution::longestSubsequenceLength(const vector<int> &a) {
    int n = a.size();
    if(n == 0)
        return 0;
    
    int lds[n];
    int lis[n];
    lis[0] = lds[n - 1] = 1;
    int i, j;
    
    for(i = 0 ; i < n ; i++)
    {
        lis[i] = lds[i] = 1;
    }
    
    for(i = 1 ; i < n ; i++)
    {
        
        for(j = 0 ; j < i ; j++)
        {
            if(a[i] > a[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
        }
    }
    
    for(i = n - 2; i >= 0; i--)
    {
        
        for(j = n - 1; j > i; j--)
        {
            if(a[i] > a[j] && lds[i] < lds[j] + 1)
                lds[i] = lds[j] + 1;                
        }
    }
    
    int ans = lis[0] + lds[0] - 1;
    for(i = 0 ; i < n; i++)
    {
        int x = lis[i] + lds[i] - 1;
        if(x > ans)
            ans = x;
    }
    return ans;
    
}
