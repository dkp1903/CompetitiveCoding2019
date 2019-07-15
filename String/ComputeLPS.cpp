#include <iostream>
using namespace std;

vector<int> computeLPS(string pat)
{
    vector<int> lps(pat.size());
    int i = 1, j = 0;
    lps[0] = 0;
    
    for(i = 1; i < pat.size(); i++)
    {
        if(pat[i] == pat[j])
        {
            j++;
            lps[i] = j;
            i++;
        }
        else
        {
            if(j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
        return lps;
    }
    
}
