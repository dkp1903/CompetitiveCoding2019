//Majority element in an array using Moore's algorithm

int findMaj(vector<int>a)
{
    int count = 1;
    int maj = 0;
    int i;
    for(i = 1 ; i < a.size(); i++)
    {
        if(a[i] == a[maj])
        {
            count++;
        }
        else
            count--;
        if(count == 0)
        {
            maj = i;
            count = 1;
        }
    }
    return a[maj];
}

bool checkMaj(vector<int> a, int k)
{
    int count = 0;
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == k)
            count++;
    }
    if(count > a.size()/2)
        return true;
    return false;
}

int majority(vector<int>a)
{
    int k = findMaj(a);
    if(checkMaj(k))
        return k;
    return -1;
}
