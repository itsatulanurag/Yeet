/*
 * @lc app=leetcode id=171 lang=cpp
 *
 * [171] Excel Sheet Column Number
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        int res = 0;
        for (char c : columnTitle)
            res = res * 26 + (int(c) - 64);
        return res;
    }
};
// @lc code=end
