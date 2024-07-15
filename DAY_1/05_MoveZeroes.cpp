/*
283. Move zeroes
https://leetcode.com/problems/move-zeroes/description/
*/

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int zeroFound = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                nums[zeroFound] = nums[i];
                zeroFound++;
            }
        }
        while (zeroFound < nums.size())
        {
            nums[zeroFound] = 0;
            zeroFound++;
        }
    }
};