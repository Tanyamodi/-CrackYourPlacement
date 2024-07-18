/*
289. Game of Life
https://leetcode.com/problems/game-of-life/description/
*/

class Solution
{
private:
    int findLive(int i, int j, vector<vector<int>> &board)
    {
        int live = 0;
        int n = board.size();
        int m = board[0].size();
        int directions[8][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};

        for (auto &dir : directions)
        {
            int ni = i + dir[0];
            int nj = j + dir[1];
            if (ni >= 0 && ni < n && nj >= 0 && nj < m && board[ni][nj] == 1)
            {
                live++;
            }
        }
        return live;
    }

public:
    void gameOfLife(vector<vector<int>> &board)
    {
        vector<vector<int>> clone = board;
        int n = board.size();
        int m = board[0].size();

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                int live = findLive(i, j, clone);

                if (clone[i][j] == 1)
                {
                    if (live < 2 || live > 3)
                    {
                        board[i][j] = 0;
                    }
                }
                else
                {
                    if (live == 3)
                    {
                        board[i][j] = 1;
                    }
                }
            }
        }
    }
};