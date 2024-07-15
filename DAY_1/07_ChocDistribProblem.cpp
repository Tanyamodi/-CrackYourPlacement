/*
Chocolate Distribution Problem
https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1
*/

class Solution
{
public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        // if there are fewer packets than students i.e., m-->students & n-->packets
        if (m > n)
            return -1;
        sort(a.begin(), a.end());
        long long mini = LLONG_MAX;
        for (long long i = 0; i + m - 1 < n; i++)
        {
            long long d = a[i + m - 1] - a[i];
            if (d < mini)
                mini = d;
        }
        return mini;
    }
};