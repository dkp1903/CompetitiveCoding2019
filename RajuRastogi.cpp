#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<min)
        {
            min=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    int ans=0;
    while(min<max)
    {
        int mid=min+(max-min)/2;
        int sum=0;
        
        for(int i=0;i<n;i++)
        {
            int diff=a[i]-mid;
            //a[i] means the number of free hours on the ith day
            //mid represents number of movie hours. So a[i] - mid represents the number of study hours = no. of questions per day.
            if(diff>=0)
            //that is, if a[i] >= mid, means that number of free hours is greater than equal to the supposed watch time of movie, 
            //hence this surplus can be utilised for solving questions. The surplus time is added to sum.
            {
                sum=sum+diff;
            }
        }
        
        if(sum<x)
        //If the surplus hours available for study are less than the total hours required for study, we need to reduce the movie time
        //that is, max = mid, therefore mid = (max+min)/2 is reduced
        {
            max=mid;
        }
        if(sum>=x)
        //If number of hours available for study is greater than number of hours required, some more time can be allocated to movies,
        //therefore, min = mid + 1, therefore mid increases.
        {
            min=mid+1;
            if(mid>ans)
            //We have to find the maximum possible mid, which we store in ans, and update it as and when a higher value is found possible.
            {
                ans=mid;
            }
        }
    }
    cout<<ans;
}
