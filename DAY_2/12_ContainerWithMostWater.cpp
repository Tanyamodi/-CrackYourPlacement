/*
11. Container With Most Water
https://leetcode.com/problems/container-with-most-water/description/
*/

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int n = height.size();
        int i = 0, j = n - 1;

        int maxArea = 0;
        while (i < j)
        {
            int h = min(height[i], height[j]);
            int w = j - i;

            int Area = h * w;
            maxArea = max(maxArea, Area);

            if (height[i] < height[j])
                i++;
            else
                j--;
        }
        return maxArea;
    }
};