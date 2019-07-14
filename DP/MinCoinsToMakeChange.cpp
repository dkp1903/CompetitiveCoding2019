//Minimum number of coins to make a given change
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--)
	{
	    int n; 
	    cin>>n;
	    int val[10]={ 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
	    int dp[10][n+1];
	    for(int i=0;i<=9;i++)//i indexes the denomination
	    {
	        for(int j=0;j<=n;j++)//j stands for the amount we have to make
	        {
	            if(i==0 || j==0) 
	                dp[i][j]=j;
	            /*i = 0 means Re. 1 coins
	            When only Re. 1 coins are considered,
	            Number of coins needed to make Rs j = j
	            
	            When j = 0, we have to make 0 coins, therefore min 
	            number of coins = 0*/
	            
	            //If current denomination can be accommodated     
	            else if(val[i]<=j)
	                dp[i][j]=min(dp[i-1][j],1+dp[i][j-val[i]]);
	            //Min of number of coins it would take if the particular denomination was considered, and not
	            
	            //Control comes here if present denomination cannot be accommodated, hence we never include that denom
	            else 
	                    dp[i][j]=dp[i-1][j];
	           
	        }
	    }
	    ///////////////////////////////////////////////
	    
	    //Backtracking used to print the coins used 
	    int i=9; 
	    int j=n;
        while(i >= 0 && j > 0)
        {
            if(dp[i][j]==dp[i-1][j])
            //Means that the ith coin has not been considered
                i--;
            else
            {
                cout<<val[i]<<" ";
                j=j-val[i];
            }
        }
        cout<<endl;
	}
	return 0;
}
