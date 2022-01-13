/*
 * @lc app=leetcode id=203 lang=cpp
 *
 * [203] Remove Linked List Elements
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
    ListNode *removeElements(ListNode *head, int val)
    {
        if (head == nullptr)
            return head;
        while (head != nullptr && head->val == val)
            head = head->next;
        ListNode *p = head;
        while (p != nullptr && p->next != nullptr)
            if (p->next->val == val)
                p->next = p->next->next;
            else
                p = p->next;
        return head;
    }
};
// @lc code=end
