/*
 * @lc app=leetcode id=86 lang=cpp
 *
 * [86] Partition List
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
    ListNode *partition(ListNode *head, int x)
    {
        ListNode *node1 = new ListNode(0);
        ListNode *node2 = new ListNode(0);
        ListNode *prev = node1;
        ListNode *curr = node2;
        while (head != nullptr)
        {
            if (head->val < x)
            {
                prev->next = head;
                prev = prev->next;
            }
            else
            {
                curr->next = head;
                curr = curr->next;
            }
            head = head->next;
        }
        curr->next = nullptr;
        prev->next = node2->next;
        return node1->next;
    }
};
// @lc code=end
