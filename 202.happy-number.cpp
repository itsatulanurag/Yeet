/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isHappy(int n)
    {
        unordered_set<int> visited;
        while (n != 1)
        {
            int sum = 0;
            while (n != 0)
            {
                sum += (n % 10) * (n % 10);
                n /= 10;
            }
            n = sum;
            if (visited.find(sum) == visited.end())
                visited.insert(sum);
            else
                return false;
        }
        return true;
    }
};
// @lc code=end
