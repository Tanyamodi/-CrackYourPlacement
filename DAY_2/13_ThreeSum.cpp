/*
15. 3Sum
https://leetcode.com/problems/3sum/description/
*/

class Solution
{
public:
    void twoSum(vector<int> &nums, int index, vector<vector<int>> &result, int target)
    {
        int i = index;
        int j = nums.size() - 1;
        while (i < j)
        {
            if (nums[i] + nums[j] < target)
            {
                i++;
            }
            else if (nums[i] + nums[j] > target)
            {
                j--;
            }
            else
            {
                result.push_back({-target, nums[i], nums[j]});
                while (i < j && nums[i] == nums[i + 1])
                    i++;
                while (i < j && nums[j] == nums[j - 1])
                    j--;
                i++;
                j--;
            }
        }
    }
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        if (nums.size() < 3)
        {
            return {};
        }

        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            int target = -(nums[i]);
            twoSum(nums, i + 1, result, target);
        }
        return result;
    }
};