/*
151. Reverse Words in a String
https://leetcode.com/problems/reverse-words-in-a-string/description/
*/
class Solution
{
public:
    string reverseWords(string s)
    {
        // puri string reverse kro
        reverse(s.begin(), s.end());
        int i = 0;
        int l = 0, r = 0;
        int n = s.length();
        while (i < n)
        {
            // jab tak i ko space na mile
            while (i < n && s[i] != ' ')
            {
                s[r++] = s[i++];
            }
            // reverse kro l aur r ko
            if (l < r)
            {
                reverse(s.begin() + l, s.begin() + r);
                // ek space ko include kro
                s[r] = ' ';
                r++;
                l = r;
            }
            // i to aage badhega hi
            i++;
        }
        // last vale space ko remove kr do
        s = s.substr(0, r - 1);
        return s;
    }
};