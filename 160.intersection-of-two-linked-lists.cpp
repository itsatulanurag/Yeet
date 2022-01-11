/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
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
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *temp;
        while (headA != nullptr)
        {
            temp = headB;
            while (temp != nullptr)
                if (temp == headA)
                    return headA;
                else
                    temp = temp->next;
            headA = headA->next;
        }
        return nullptr;
    }
};
// @lc code=end
