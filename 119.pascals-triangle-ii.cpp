/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<vector<int>> pas;
        for (int i = 0; i <= rowIndex; i++)
        {
            vector<int> res(i + 1, 1);
            for (int j = 1; j < i; j++)
                res[j] = pas[i - 1][j - 1] + pas[i - 1][j];
            pas.push_back(res);
        }
        return pas[rowIndex];
    }
};
// @lc code=end
