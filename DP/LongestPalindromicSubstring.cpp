//Longest Palindromic Substring 

int lps(string s)
{
    int n = s.size();
    bool table[n][n];
    memset(table, 0, sizeof(table))
    
    int i = 0, start = 0, maxLength = 1;
    
    for(i = 0 ; i < n ; i++)
        table[i][i] = true;
    
    for(i = 0 ; i < n - 1; i++)
    {
        if(s[i] == s[i + 1])
        {
            table[i][i + 1] = true;
            maxLength = 2;
            if(i <= start)
                start = i;
        }
    }
    
    for(int k = 3; k <= n; k++)
    {
        for(i = 0 ; i < n - k + 1; i++)
        {
            if(table[i + 1][j - 1] && s[i] == s[j])
            {
                table[i][j] = true;
                
                if(k > maxLength)
                {
                    start = i;
                    maxLength = k;
                }
            }
        }
    }
    return k;
}
