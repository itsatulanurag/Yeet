/*
 * @lc app=leetcode id=287 lang=cpp
 *
 * [287] Find the Duplicate Number
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;
        for (int x : nums)
        {
            if (m[x] == 1)
                return x;
            m[x]++;
        }
        return 0;
    }
};
// @lc code=end

