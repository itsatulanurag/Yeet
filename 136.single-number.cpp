/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        if (len < 2)
            return nums[0];
        else
            for (int i = 0; i < len; i += 2)
                if (nums[i] != nums[i + 1])
                    return nums[i];
        return 0;
    }
};
// @lc code=end
