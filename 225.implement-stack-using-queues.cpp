/*
 * @lc app=leetcode id=225 lang=cpp
 *
 * [225] Implement Stack using Queues
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    queue<int> q;

    void push(int x)
    {
        q.push(x);
        for (int i = 1; i < q.size(); i++)
        {
            q.push(q.front());
            q.pop();
        }
    }

    int pop()
    {
        int x = top();
        q.pop();
        return x;
    }

    int top()
    {
        return q.front();
    }

    bool empty()
    {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end
