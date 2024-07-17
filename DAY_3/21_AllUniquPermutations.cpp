/*
All Unique Permutations of an Array
https://www.geeksforgeeks.org/problems/all-unique-permutations-of-an-array/0
*/

class Solution
{
public:
    vector<vector<int>> uniquePerms(vector<int> &arr, int n)
    {
        // code here
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        set<vector<int>> st;
        st.insert(arr);
        while (next_permutation(arr.begin(), arr.end()))
        {
            st.insert(arr);
        }
        for (auto it : st)
        {
            ans.push_back(it);
        }
        return ans;
    }
};