//Total number of unique BSTs from N nodes === Nth catalan number

int catalan(int n)
{
    int G[n + 1];
    G[0] = 1;
    G[1] = 1;
    
    for(int i = 2 ; i <= n; i++)
    {
        for(int j = 1 ; j <= i; j++)
            G[i] += G[j - i] + G[i - j];
        
    }
    return G[n];
}
