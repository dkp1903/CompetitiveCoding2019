//Coin Change problem

int coin(int S[], int n, int m)
{
    //S is the array of the different denominations of coins possible 
    //n is the sum we have to make
    //m is the size of S, that is the number of different denominations that we have
    
    //We make table of size (n + 1)*m, because we count all sums from 0 to n
    int table[n + 1][m];
    
    int i, j, x, y;
    
    /*
        Base Case: For n = 0, that is sum to be made = 0
        Irrespective of the value of m, there will always be one possible
        solution, that is to choose no coins
    */
    for(i = 0 ; i < m ; i++)
        table[0][i] = 1;
    
    //i-> Sum we need to make
    for(i = 0 ; i <= n; i++)
    {
        //m-> Number of denominations
        for(j = 0 ; j < m ; j++)
        {
            //if the particular denomination can be accommodated in the sum
            if(i >= S[j])
            //x stores number of solutions when the jth deno is included
            //Remaining sum that we have to find  = i - S[j]
            //Remaining number of coins = j, as we have infinite supply of coins of each type
                x = table[i - S[j]][j];
            else
                x = 0;
                
            //y stores the number of solutions when jth deno is not included
            if(j >= 1)
            //Legit denomination
            //Number of remaining coins = j - 1, we dont include the present one 
            //No change in the required sum 
                y = table[i][j - 1];
            else
                y = 0;
            table[i][j] = x + y;
        }
    }
    return table[n][m - 1];
    
}
