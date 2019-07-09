//check if a number is a multiple of 3 

int check(int n)
{
    int e = 0;
    int o = 0;
    if(n < 0)
        n = -n;
    if(n == 0)
        return 1;
    if(n == 1)
        return 0;
        
    while(n > 0)
    {
        if(n & 1)
            o++;
        if(n & 2)
            e++;
        n = n >> 2;
    }
    
    return check(o - e);
}
