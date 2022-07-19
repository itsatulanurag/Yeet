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
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *false_head=new ListNode(0);
        false_head->next=head;
        ListNode *slow_ptr=false_head;
        ListNode *fast_ptr=false_head;

        for(int i=0; i<n+1;i++)
            fast_ptr=fast_ptr->next;
        while(fast_ptr!=nullptr)
        {
            slow_ptr=slow_ptr->next;
            fast_ptr=fast_ptr->next;
        }
        slow_ptr->next=slow_ptr->next->next;
        return false_head->next;
    }
};
// @lc code=end
