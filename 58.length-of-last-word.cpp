/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int l = s.length();
        int i;
        bool check = false;
        for (i = l - 1; i >= 0; i--)
        {
            if (s[i] == ' ' && check == true)
                break;
            if (s[i] != ' ' && check != true)
            {
                check = true;
                l = i;
            }
        }
        string str = s.substr(i + 1, l - i);
        return str.length();
    }
};
// @lc code=end
