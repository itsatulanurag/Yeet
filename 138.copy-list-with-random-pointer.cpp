/*
 * @lc app=leetcode id=138 lang=cpp
 *
 * [138] Copy List with Random Pointer
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        if (head == nullptr)
            return head;
        unordered_map<Node *, Node *> m;
        Node *sudo_head = head;
        while (sudo_head != nullptr)
        {
            m[sudo_head] = new Node(sudo_head->val);
            sudo_head = sudo_head->next;
        }
        sudo_head = head;
        while (sudo_head != nullptr)
        {
            m[sudo_head]->next = m[sudo_head->next];
            m[sudo_head]->random = m[sudo_head->random];
            sudo_head = sudo_head->next;
        }
        return m[head];
    }
};
// @lc code=end
