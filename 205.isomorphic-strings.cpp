/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        return (check(s, t) && check(t, s));
    }
    bool check(string s, string t)
    {
        unordered_map<char, char> m;
        for (int i = 0; i < s.size(); i++)
        {
            char a = s[i];
            char b = t[i];
            if (m.find(a) != m.end())
            {
                if (m[a] != b)
                    return false;
            }
            else
                m[a] = b;
        }
        return true;
    }
};
// @lc code=end
