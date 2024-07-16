/*
18. 4Sum
https://leetcode.com/problems/4sum/description/
*/

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        set<vector<int>> ans;
        int n = nums.size();
        if (n < 4)
        {
            return {};
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 3; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < n - 2; j++)
            {
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;
                int left = j + 1, right = n - 1;

                while (left < right)
                {
                    long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];
                    if (sum > target)
                        right--;
                    else if (sum == target)
                    {
                        vector<int> t;
                        t.push_back(nums[i]);
                        t.push_back(nums[j]);
                        t.push_back(nums[left]);
                        t.push_back(nums[right]);
                        ans.insert(t);
                        left++;
                    }
                    else
                    {
                        left++;
                    }
                }
            }
        }

        vector<vector<int>> res;
        for (auto it : ans)
            res.push_back(it);
        return res;
    }
};