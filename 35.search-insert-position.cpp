/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int start = 0;
        int last = nums.size() - 1;
        while (start <= last)
        {
            int mid = (start + last) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                start = mid + 1;
            else
                last = mid - 1;
        }
        return start;
    }
};
// @lc code=end
