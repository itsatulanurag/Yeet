/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int carry = 0;
        for (int i = digits.size() - 1; i >= 0; i--)
            if (i == digits.size() - 1 || carry == 1)
            {
                digits[i] = digits[i] + 1;
                carry = digits[i] / 10;
                digits[i] = digits[i] % 10;
            }
        if (carry)
            digits.insert(digits.begin(), 1);
        return digits;
    }
};
// @lc code=end
