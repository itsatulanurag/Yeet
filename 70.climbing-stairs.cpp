/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution
{
public:
    int climbStairs(int n)
    {
        if (n <= 2)
            return n;
        int a = 1, b = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            count = a + b;
            b = a;
            a = count;
        }
        return count;
    }
};
// @lc code=end
