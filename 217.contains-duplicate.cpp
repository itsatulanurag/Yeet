/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> m;
        for (int x : nums)
            if (m.find(x) != m.end())
                return true;
            else
                m.insert(x);
        return false;
    }
};
// @lc code=end
