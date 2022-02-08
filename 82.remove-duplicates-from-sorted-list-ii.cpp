/*
 * @lc app=leetcode id=82 lang=cpp
 *
 * [82] Remove Duplicates from Sorted List II
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
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
            return head;
        if (head->val != head->next->val)
        {
            head->next = deleteDuplicates(head->next);
            return head;
        }
        int temp = head->val;
        while (head != nullptr && head->val == temp)
            head = head->next;
        return deleteDuplicates(head);
    }
    // {
    //     ListNode *sudo_head = new ListNode();
    //     sudo_head->next = head;
    //     ListNode *prev = sudo_head, *curr = head;
    //     while (curr != nullptr)
    //     {
    //         if (curr->next != nullptr && curr->val == curr->next->val)
    //         {
    //             while (curr->next != nullptr && curr->val == curr->next->val)
    //                 curr = curr->next;
    //             prev->next = curr->next;
    //         }
    //         else
    //             prev = curr;
    //         curr = curr->next;
    //     }
    //     return sudo_head->next;
    // }
    // {
    //     if (!head || head->next == nullptr)
    //         return head;
    //     if (head->val != head->next->val)
    //     {
    //         head->next = deleteDuplicates(head->next);
    //         return head;
    //     }
    //     int temp = head->val;
    //     while (head && head->val == temp)
    //         head = head->next;
    //     return deleteDuplicates(head);
    // }
};
// @lc code=end
