/*
 * @lc app=leetcode id=190 lang=cpp
 *
 * [190] Reverse Bits
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        uint32_t res = 0;
        uint32_t bit = 0;
        for (int i = 0; i < 32; i++)
        {
            bit = (n >> i) & 1;            //right shift to select the current bit we're working on and and it to check if it's a 1 or 0
            res = res | (bit << (31 - i)); //left shift the current bit to the required position and or it to get it's reversed position
        }
        return res;
    }
};
// @lc code=end
