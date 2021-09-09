/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string st = "";
        sort(strs.begin(), strs.end());
        string start = strs[0];
        string last = strs[strs.size() - 1];
        for (int i = 0; i < start.size(); i++)
            if (start[i] == last[i])
                st.push_back(start[i]);
            else
                break;
        return st;
    }
};
// @lc code=end
