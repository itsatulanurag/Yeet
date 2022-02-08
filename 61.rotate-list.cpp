/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
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
    ListNode *rotateRight(ListNode *head, int k)
    {
        // if (!head || head->next == nullptr)
        //     return head;
        // ListNode *q = head;
        // int len = 1;
        // while (q->next != nullptr)
        // {
        //     len++;
        //     q = q->next;
        // }
        // k = k % len;
        // while (k--)
        // {
        //     ListNode *p = head;
        //     while (p->next->next != nullptr)
        //         p = p->next;
        //     p->next->next = head;
        //     head = p->next;
        //     p->next = nullptr;
        // }
        // return head;
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode *sudo_head = head;
        int len = 1;
        while (sudo_head->next != nullptr)
        {
            len++;
            sudo_head = sudo_head->next;
        }
        int n_trans = k % len;
        while (n_trans--)
        {
            ListNode *temp_head = head;
            while (temp_head->next->next != nullptr)
                temp_head = temp_head->next;
            temp_head->next->next = head;
            head = temp_head->next;
            temp_head->next = nullptr;
        }
        return head;
    }
};
// @lc code=end
