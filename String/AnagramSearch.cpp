bool compare(char a1[], char a2[])
    {
        for(int i = 0; i < MAX; i++)
            if(a1[i] != a2[i])
                return false;
        return true;
    }

    vector<int> findAnagrams(string txt, string pat)
    {
        vector<int> ans;
        int m = pat.size();
        int n = txt.size();
        
        char countP[MAX] = {0}, countTW[MAX] = {0};
        for(int i = 0 ; i < m; i++)
        {
            countP[pat[i]]++;
            countTW[txt[i]]++;
        }
        
        for(int i = m; i < n; i++)
        {
            if(compare(countP, countTW))
                ans.push_back(i - m);
            
            countTW[txt[i]]++;
            countTW[txt[i-m]]--;
        }
        if(compare(countP, countTW))
            ans.push_back(n -m);
        return ans;
    }
