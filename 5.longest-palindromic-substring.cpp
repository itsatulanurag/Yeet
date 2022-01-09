/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestPalindrome(string s)
    {
        if (s.length() < 2)
            return s;
        int start = 0, end = 0;
        int len_max;
        for (int i = 0; i < s.length(); i++)
        {
            int len1 = expandFromMiddle(s, i, i);
            int len2 = expandFromMiddle(s, i, i + 1);
            len_max = max(len1, len2);
            if (len_max > end - start)
            {
                start = i - (len_max - 1) / 2;
                end = i + len_max / 2;
            }
        }
        return s.substr(start, len_max);
    }

    int expandFromMiddle(string s, int left, int right)
    {
        if (s == "" || left > right)
            return 0;
        while (left >= 0 && right < s.length() && s[left] == s[right])
            left--, right++;
        return (right - left + 1);
    }
};
// @lc code=end
