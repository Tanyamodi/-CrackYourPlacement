class Solution
{
public:
    vector<vector<string>> Anagrams(vector<string> &string_list)
    {
        // code here
        vector<vector<string>> result;
        int n = string_list.size();

        if (n == 0)
            return result;

        unordered_map<string, vector<string>> umap;
        for (auto i : string_list)
        {
            string str = i;
            sort(str.begin(), str.end());
            umap[str].push_back(i);
        }
        for (auto i : umap)
            result.push_back(i.second);

        return result;
    }
};