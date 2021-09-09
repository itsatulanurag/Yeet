/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */
using namespace std;

// @lc code=start
class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> S = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int num = S[s.back()];
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (S[s[i]] < S[s[i + 1]])
                num -= S[s[i]];
            else
                num += S[s[i]];
        }
        return num;
    }
};
// @lc code=end
