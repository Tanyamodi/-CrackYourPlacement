/*
1. Two Sum
https://leetcode.com/problems/two-sum/description/
 */

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // 2 pointer approach

        // store the original indices of nums
        vector<pair<int, int>> num_index;
        for (int i = 0; i < nums.size(); i++)
        {
            num_index.push_back({nums[i], i});
        }

        int left = 0, right = num_index.size() - 1;

        sort(num_index.begin(), num_index.end());
        while (left <= right)
        {
            int sum = num_index[left].first + num_index[right].first;
            if (sum == target)
            {
                return {num_index[left].second, num_index[right].second};
            }
            else if (sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return {-1, -1};
    }
};