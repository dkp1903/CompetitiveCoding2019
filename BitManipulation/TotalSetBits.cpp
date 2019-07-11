//Count total number of set bits from 1 to N 

//The function counts the number of set bits in all numbers from 1 to n 
int count(int n)
{
    /*
    Logic:
    
    Outer loop for every bit position
    Inner loop for all numbers from 0 to n 
    That is, compare the ith bit of all numbers
    
    We realise that for all numbers from 0 to n, the ith bit from the right
    is flipped after 2^i numbers, which we will use
    */
    
    int i = 0;
    int ans = 0;
    
    //i represents the bit position.
    while(n >= pow(2, i))
    {
        //This condition considers only as many bits as we know we need to consider 
        //For instance, this will make sure that for n = 5, we check only the first three bits
        //Because the others are going to be unset 
        
        //To flip the ith bit
        bool k = 0;
        
        
        int change = pow(2, i);
    
        for(int j = 0 ; j <= n; j++)
        {
            ans += k;
            if(change == 1)
            {
                k = !k;
                change = pow(2, i);
            }
            else
                change--;
        }
        i++;
    }
    return ans;
}
