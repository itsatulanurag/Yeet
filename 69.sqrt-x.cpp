/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int mySqrt(long long x)
    {
        long long low = 0;
        long long high = x + 1;
        while (low < high)
        {
            long long mid = low + (high - low) / 2;
            if (mid * mid > x)
                high = mid;
            else
                low = mid + 1;
        }
        return low - 1;
    }
};
// @lc code=end
