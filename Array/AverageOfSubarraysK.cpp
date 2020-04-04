  // Given an array of size n, the task is to find the averages of all subarray of size k
  
  vector<double> finder (int k, vector<int>a)
  {
      double windowSum = 0;
      int windowStart = 0;
      int windowEnd = 0;
      vector<double> result(a.size() - k + 1);

      for (windowEnd = 0 ; windowEnd < a.size() ; windowEnd++)
      {
          windowSum += a[windowEnd];
          if (windowEnd >= k - 1)
          {
              result[windowStart] = windowSum/k;
              windowSum -= a[windowStart];
              windowStart++;
          }

      }
      return result;
  }
