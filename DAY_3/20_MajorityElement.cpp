/*
169. Majority Element
https://leetcode.com/problems/majority-element/description/
*/

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        // MOORE VATING ALGORITHM
        int count = 0;
        int ele;
        for (int i = 0; i < nums.size(); i++)
        {
            if (count == 0)
            {
                ele = nums[i];
                count = 1;
            }
            else if (nums[i] == ele)
            {
                count++;
            }
            else
            {
                count--;
            }
        }

        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == ele)
            {
                ans++;
            }
            if (ans > nums.size() / 2)
                return ele;
        }
        return -1;
    }
};