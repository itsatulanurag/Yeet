/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        // if (l1 == NULL && l2 == NULL)
        //     return NULL;
        // else if (l1 == NULL)
        //     return l2;
        // else if (l2 == NULL)
        //     return l1;
        // int temp = l1->val + l2->val;
        // int c = temp % 10;
        // ListNode *l = new ListNode(c);
        // l->next = addTwoNumbers(l1->next, l2->next);
        // if (temp >= 10)
        //     l->next = addTwoNumbers(l->next, new ListNode(1));
        // return l;
        if (l1 == nullptr && l2 == nullptr)
            return nullptr;
        else if (l1 == nullptr)
            return l2;
        else if (l2 == nullptr)
            return l1;
        int curr_sum = l1->val + l2->val;
        ListNode *l = new ListNode(curr_sum % 10);
        l->next = addTwoNumbers(l1->next, l2->next);
        if (curr_sum >= 10)
            l->next = addTwoNumbers(l->next, new ListNode(1));
        return l;
    }
};
// @lc code=end
