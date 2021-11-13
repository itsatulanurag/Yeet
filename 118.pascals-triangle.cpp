/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> res;
        for (int i = 1; i <= numRows; i++)
        {
            vector<int> temp(i, 1);
            for (int j = 1; j < i - 1; j++)
                temp[j] = res[i - 2][j - 1] + res[i - 2][j];
            res.push_back(temp);
        }
        return res;
    }
};
// @lc code=end
