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
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        unordered_map<ListNode *, int> m;
        while (headA)
        {
            m[headA]++;
            headA = headA->next;
        }
        while (headB)
        {
            if (m[headB] > 0)
                return headB;
            headB = headB->next;
        }
        return nullptr;
    }
};
// @lc code=end
