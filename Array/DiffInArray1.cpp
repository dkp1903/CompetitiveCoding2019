#include<bits/stdc++.h>
using namespace std;

int fun(vector<int>a, int n)
{
    int max = a[0];
    int min = a[0];
    
    for(int i = 0 ; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
        {
            min = a[i];
            max = 0;
        }    
    }
    if(max == 0)
        int ans = a[n-1] - min;
    else
        int ans = max - min;
    return ans;
        
    
}

int main()
{
    vector<int>a = {-1, -3, -4, -2, -6, -5};
    fun(a, 6);
}
