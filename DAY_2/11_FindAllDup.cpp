/*
442. Find All Duplicates in an Array
https://leetcode.com/problems/find-all-duplicates-in-an-array/description/
*/

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            // check krte vaqt positive value consider krni hai
            int num = abs(nums[i]);
            // agar value visited hai tabhi usko ans mein push krenge
            if (nums[num - 1] < 0)
            {
                ans.push_back(num);
            }
            else
            {
                // value ko visited mark kr do
                nums[num - 1] *= -1;
            }
        }
        return ans;
    }
};