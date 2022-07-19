/*
 * @lc app=leetcode id=215 lang=cpp
 *
 * [215] Kth Largest Element in an Array
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // sort(nums.begin(), nums.end(), greater<int>());
        // return nums[k-1];

        priority_queue<int> pq;
        for (int a : nums)
            pq.push(a);
        while (--k)
            pq.pop();
        return pq.top();
    }
};
// @lc code=end

