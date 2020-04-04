    // Max sum subarray of size k
    // Time : O(n)
    //Space : O(1)
    int maxy(int k, vector<int>a)
    {
        int windowSum =0, maxSum = 0, windowStart = 0, windowEnd = 0, ans = 0;
        for(windowEnd = 0 ; windowEnd < a.size(); windowEnd++)
        {
            windowSum += a[windowEnd];
            if (windowEnd >= k - 1)
            {
                ans = max (ans, windowSum);
                windowSum -= a[windowStart];
                windowStart++;
            }
        }
        return ans;
    }
