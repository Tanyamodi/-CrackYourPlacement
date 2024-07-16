/*
1423. Maximum Points You Can Obtain from Cards
https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/description/
*/

class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int n = cardPoints.size();
        int lSum = 0, rSum = 0, maxSum = 0;
        for (int i = 0; i < k; i++)
        {
            lSum = lSum + cardPoints[i];
            maxSum = lSum;
        }
        int rIndex = n - 1;
        for (int i = k - 1; i >= 0; i--)
        {
            lSum = lSum - cardPoints[i];
            rSum = rSum + cardPoints[rIndex];
            rIndex--;
            int tSum = lSum + rSum;
            maxSum = max(maxSum, tSum);
        }
        return maxSum;
    }
};