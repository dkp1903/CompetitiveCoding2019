//Count distint elements in every window of size k 

int countDistinct(int a[], int n, int k)
{
    map<int, int> m;
    int dist = 0;
    
    int i;
    //First k elements, are to be inserted in the map and dist count is to be updated
    for(i = 0 ; i < k ; i++)
    {
        if(m[a[i]] == 0)
            dist++;
        m[a[i]]++;
    }
    
    //For the next elements
    for(i = k ; i < n; i++)
    {   //Remove first element of previous window, as it will not be part of the current window
        //If the element to be removed has only one occurence, that will be removed and hence, wont be
        //a distinct element in the current window
        if(m[a[i - k] == 1)
            dist--;
        m[a[i - k]]--;
    }
    //New element, that is, not present in the current window, may have come earlier and gone
    if(m[a[i]] == 0)
        dist++;
    m[a[i]]++;
    
    return dist;
}
