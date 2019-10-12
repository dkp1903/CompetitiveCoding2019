class Solution:
    def maxProfit(self, A):
        if not A: return 0
        xmin = A[0]
        p = [0] * len(A)
        for i, x in enumerate(A):
            xmin = min(xmin, x)
            p[i] = max(p[i-1], x - xmin)
        profit = 0
        xmax = A[len(A)-1]
        for i in range(len(A)-1,-1,-1):
            xmax = max(xmax, A[i])
            profit = max(profit, p[i] + xmax - A[i])
        return profit
