//Number of pairs with diff >= k 

int fun(int a[], int k, int n)
{
    int i = 0, j = 1, count = 0;
    
    sort(a, a + n);
    
    while(i < n && j < n)
    {
        if(j <= i)
            j = i + 1;
        while(a[j] - a[i] < k && j < n)
            j++;
        count += n - j;
        i++
    }
    
}
