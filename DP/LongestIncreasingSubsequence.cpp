//Longest increasing subsequence DP

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[n];
    int lis[n];
    //LIS stores the longest increasing subsequence terminating at a[i]
    
    lis[0] = 1;
    //The length of the Longest Increasing subsequence terminating at the first element
    //is the element itself, that is length is 1 
    
    //DP -> Tabulation -> Bottom Up Approach
    
    for(int i = 1 ; i < n ; i++)
    {
        lis[i] = 1;
        //Every element itself can be an LIS 
        //All values can be initialised to 1 separately too
        
        for(int j = 0 ; j < i ; j++)
        {
            if(a[i] > a[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1
            //1st condition is to check for increasing. If an element that comes later(a[i]) is greater than
            //One which comes earlier(a[j]), the LIS can be increased to include a[i]
            
            //Second condition checks if including the ith element would indeed give 
            //A larger value for length of LIS, which is desired
            
            //Then we change the value of lis[i] to  lis[j] + 1 
        }
    }
    //Thus, every element of lis[] stores the length of the LIS ending at that element
    //We have to find the largest of these values, that is, the max in lis[]
    return *max_element(l, l + n);
}
