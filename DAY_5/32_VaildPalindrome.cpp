/*
680. Valid Palindrome 2
https://leetcode.com/problems/valid-palindrome-ii/description/
*/

class Solution
{
public:
    bool validPalindromeHelper(string &s, int left, int right)
    {
        while (left < right)
        {
            if (s[left] == s[right])
            {
                left++;
                right--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string &s)
    {
        int left = 0, right = s.size() - 1;
        while (left < right)
        {
            if (s[left] == s[right])
            {
                left++;
                right--;
            }
            else
            {
                return validPalindromeHelper(s, left + 1, right) || validPalindromeHelper(s, left, right - 1);
            }
        }
        return true;
    }
};