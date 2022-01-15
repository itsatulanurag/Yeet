/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            int val = nums[i];
            if (m.find(val) != m.end() && abs(i - m[val]) <= k)
                return true;
            else
                m[val] = i;
        }
        return false;
    }
};
// @lc code=end
