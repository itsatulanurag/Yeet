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
        // string str = "";
        // for (auto x : s)
        //     if ((tolower(x) >= 97 && tolower(x) <= 122) || (x >= 48 && x <= 57))
        //         str.push_back(tolower(x));
        // int len = str.length();
        // for (int i = 0; i < len; i++)
        //     if (str[i] != str[--len])
        //         return false;
        // return true;

        string str = "";
        for (char ch : s)
            if ((tolower(ch) >= 97 && tolower(ch) <= 122) || (ch >= 48 && ch <= 57))
                str.push_back(tolower(ch));
        int len = str.size();
        for (int i = 0;i < len;i++)
            if (str[i] != str[--len])
                return false;
        return true;
    }
};
// @lc code=end
