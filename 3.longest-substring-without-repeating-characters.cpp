/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        // sliding window bitch
        int left = 0, right = 0;
        int ans = 0;
        int chars[256] = {0};
        while (right < s.length())
        {
            chars[s[right]]++;
            while (chars[s[right]] > 1)
            {
                chars[s[left]]--;
                left++;
            }
            ans = max(ans, right - left + 1);
            right++;
        }
        return ans;
    }
};
// @lc code=end
