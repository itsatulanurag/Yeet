/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = nums[0];
        int temp = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (temp < 0)
                temp = 0;
            temp += nums[i];
            sum = max(sum, temp);
        }
        return sum;
    }
};
// @lc code=end
