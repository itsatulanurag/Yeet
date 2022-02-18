/*
 * @lc app=leetcode id=92 lang=cpp
 *
 * [92] Reverse Linked List II
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
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        ListNode *sudo_head = new ListNode(0);
        ListNode *prev = sudo_head, *curr;
        sudo_head->next = head;
        for (int i = 1; i < left; i++)
            prev = prev->next;
        curr = prev->next;
        for (int i = 1; i < right - left + 1; i++)
        {
            ListNode *temp = prev->next;
            prev->next = curr->next;
            curr->next = curr->next->next;
            prev->next->next = temp;
        }
        return sudo_head->next;
    }
};
// @lc code=end
