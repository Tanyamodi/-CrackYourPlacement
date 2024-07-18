/*
1499. Max Value Of Equation
https://leetcode.com/problems/max-value-of-equation/description/
*/

class Solution
{
public:
    int findMaxValueOfEquation(vector<vector<int>> &points, int k)
    {
        int n = points.size();
        priority_queue<pair<int, int>> p;
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            while ((!p.empty()) && (points[i][0] - p.top().second > k))
                p.pop();
            if (!p.empty())
            {
                ans = max(ans, points[i][0] + points[i][1] + p.top().first);
            }
            p.push({points[i][1] - points[i][0], points[i][0]});
        }
        return ans;
    }
};