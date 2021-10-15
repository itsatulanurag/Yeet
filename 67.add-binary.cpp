/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        string res = "";
        while (i >= 0 || j >= 0 || carry != 0)
        {
            if (i >= 0)
            {
                carry += a[i] == '0' ? 0 : 1;
                i--;
            }
            if (j >= 0)
            {
                carry += b[j] == '0' ? 0 : 1;
                j--;
            }
            res = ((carry % 2) == 0 ? "0" : "1") + res;
            carry /= 2;
        }
        return res;
    }
};
// @lc code=end
