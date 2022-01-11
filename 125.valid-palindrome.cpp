/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string str = "";
        for (auto x : s)
            if ((tolower(x) >= 97 && tolower(x) <= 122) || (x >= 48 && x <= 57))
                str.push_back(tolower(x));
        string strev = str;
        reverse(strev.begin(), strev.end());
        if (str.compare(strev) == 0)
            return true;
        return false;
    }
};
// @lc code=end
