/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int k = 0;
        for (auto x : nums)
            if (x != val)
                nums[k++] = x;
        return k;
    }
};
// @lc code=end
