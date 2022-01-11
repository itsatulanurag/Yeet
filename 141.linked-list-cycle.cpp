/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        if (head == nullptr)
            return false;
        ListNode *p = head;
        ListNode *q = head->next;
        while (p != q)
        {
            if (q == nullptr || q->next == nullptr)
                return false;
            p = p->next;
            q = q->next->next;
        }
        return true;
    }
};
// @lc code=end
