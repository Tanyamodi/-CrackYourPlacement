/*
122. Best Time to Buy & Sell Stock 2
https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/
*/

class Solution
{
public:
    int getProfit(int index, int buy, vector<int> &prices, vector<vector<int>> &dp)
    {
        int n = prices.size();
        int profit = 0;
        if (index == n)
            return 0;
        if (dp[index][buy] != -1)
            return dp[index][buy];
        if (buy)
        {
            profit = max(-prices[index] + getProfit(index + 1, 0, prices, dp),
                         0 + getProfit(index + 1, 1, prices, dp));
        }
        else
        {
            profit = max(prices[index] + getProfit(index + 1, 1, prices, dp),
                         0 + getProfit(index + 1, 0, prices, dp));
        }
        return dp[index][buy] = profit;
    }
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int>(2, -1));
        return getProfit(0, 1, prices, dp);
    }
};