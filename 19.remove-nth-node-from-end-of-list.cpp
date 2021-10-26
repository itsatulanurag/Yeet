/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        if (!head)
            return nullptr;
        ListNode *p = head;
        ListNode *q = head;
        while (n--)
            p = p->next;
        if (p == nullptr)
            return head->next;
        while (p->next != nullptr)
        {
            p = p->next;
            q = q->next;
        }
        q->next = q->next->next;
        return head;
    }
};
// @lc code=end
