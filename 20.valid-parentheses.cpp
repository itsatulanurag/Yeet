/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> brackets;
        for (auto x : s)
            switch (x)
            {
            case '(':
            case '{':
            case '[':
                brackets.push(x);
                break;
            case ')':
                if (brackets.empty() || brackets.top() != '(')
                    return false;
                else
                    brackets.pop();
                break;
            case '}':
                if (brackets.empty() || brackets.top() != '{')
                    return false;
                else
                    brackets.pop();
                break;
            case ']':
                if (brackets.empty() || brackets.top() != '[')
                    return false;
                else
                    brackets.pop();
                break;
            }
        return brackets.empty();
    }
};
// @lc code=end
