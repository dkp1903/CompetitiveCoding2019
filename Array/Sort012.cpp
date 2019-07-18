#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n ;i++)
            cin>>a[i];
        int low = 0;
        int mid = 0;
        int high = n - 1;
        
        while(mid <= high)
        {
            switch(a[mid])
            {
                case 0:
                {
                    swap(a[low++], a[mid++]);
                    break;
                }
                case 1:
                {
                    mid++;
                    break;
                }
                case 2:
                {
                    swap(a[high--], a[mid]);
                    break;
                }
            }
        }
        for(int i = 0 ; i < n; i++)
            cout<<a[i]<<" ";
        cout<<endl;
        
    }
	
	return 0;
}
