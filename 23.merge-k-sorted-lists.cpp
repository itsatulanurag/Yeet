/*
 * @lc app=leetcode id=23 lang=cpp
 *
 * [23] Merge k Sorted Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        if (lists.empty())
            return nullptr;
        if (lists.size() == 1)
            return lists[0];
        ListNode *res = nullptr;
        for (auto i : lists)
            res = mergeTwoLists(res, i);
        return res;
    }
    ListNode *mergeTwoLists(ListNode *L1, ListNode *L2)
    {
        if (L1 == nullptr)
            return L2;
        if (L2 == nullptr)
            return L1;
        else if (L1->val < L2->val)
        {
            L1->next = mergeTwoLists(L1->next, L2);
            return L1;
        }
        else
        {
            L2->next = mergeTwoLists(L1, L2->next);
            return L2;
        }
    }
};
// @lc code=end
