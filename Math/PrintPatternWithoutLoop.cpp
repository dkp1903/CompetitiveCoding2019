//Print decreasing Pattern without loop - Method 1 

void pp(int n, int m, bool flag, vector<int> &sol)
{
    sol.push_back(m);
    
    if(!flag && n == m)
        return;
    
    if(flag)
    {
        if(m > 5)
            pp(n, m - 5, true, sol);
        else
            pp(n, m - 5, false, sol);
    }
    else
        pp(n, m + 5, false, sol);
        
        
}

vector<int> util(int n)
{
    vector<int> sol;
    bool flag = true;
    pp(n, n, flag, sol);
    return sol;
}

////////////////////////////////


void pp2(int n, vector<int> &sol)
{
    if(n <= 0)
    {
        sol.push_back(n);
        return;
    }
    sol.push_back(n);
    pp2(n - 5);
    sol.push_back(n);
}
