/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int k = 0;
        for (int i = 0; i < nums.size(); i++)
            if (k == 0 || nums[i] > nums[k - 1])
                nums[k++] = nums[i];
        return k;
    }
};
// @lc code=end
