//0-1 Knapsack Problem

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, W, i, j;
    //int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>W;
        int val[n], wt[n];
        for(i = 0 ; i < n ; i++)
            cin>>val[i];
        for(i = 0 ; i < n ; i++)
            cin>>wt[i];
        int dp[n + 1][W + 1];
        
        for(i = 0 ; i <= n ; i++)
        {
            for(j = 0 ; j <= W; j++)
            {
                if(i == 0 || j == 0)
                    dp[i][j] = 0;
                else if(wt[i - 1] <= j)
                    dp[i][j] = max((val[i - 1] + dp[i - 1][j - wt[i - 1]]), dp[i - 1][j]);
                
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        cout<<dp[n][W]<<endl;   
    }   
	
	return 0;
}
