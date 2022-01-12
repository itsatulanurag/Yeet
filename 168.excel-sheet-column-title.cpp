/*
 * @lc app=leetcode id=168 lang=cpp
 *
 * [168] Excel Sheet Column Title
 */

// @lc code=start
class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        string s = "";
        while (columnNumber != 0)
        {
            char c = (columnNumber - 1) % 26;
            s = char('A' + c) + s;
            columnNumber = (columnNumber - 1) / 26;
        }
        return s;
    }
};
// @lc code=end
