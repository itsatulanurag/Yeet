/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m;
        unordered_set<int> ar1(nums1.begin(), nums1.end());
        unordered_set<int> ar2(nums2.begin(), nums2.end());
        for (int a : ar1)
            m[a]++;
        for (int b : ar2)
            m[b]++;
        vector<int> arr;
        // cout << m.size();
        for (auto pair : m) {
            if (pair.second > 1)
                arr.push_back(pair.first);
        }
        return arr;
    }
};
// @lc code=end

