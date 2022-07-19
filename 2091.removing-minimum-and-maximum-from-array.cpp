/*
 * @lc app=leetcode id=2091 lang=cpp
 *
 * [2091] Removing Minimum and Maximum From Array
 */

#include<bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int min_pos = 0, max_pos = 0;
        int min_elm = INT_MAX, max_elm = INT_MIN;
        int len = nums.size();

        for (int i = 0;i < len;i++) {
            if (nums[i] < min_elm)
                min_elm = nums[i], min_pos = i;
            if (nums[i] > max_elm)
                max_elm = nums[i], max_pos = i;
        }
        int front_check = max(min_pos, max_pos) + 1;
        int back_check = len - min(min_pos, max_pos);
        int combi_check = min(min_pos, max_pos) + 1+ len - max(min_pos, max_pos);

        return min(min(front_check, back_check), combi_check);

    }
};
// @lc code=end

