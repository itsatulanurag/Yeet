/*
 * @lc app=leetcode id=104 lang=cpp
 *
 * [104] Maximum Depth of Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int depth = 1;
    int maxDepth(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        depthFunc(root, depth);
        return depth;
    }
    void depthFunc(TreeNode *root, int d)
    {
        if (root == nullptr)
            return;
        if (root->left == nullptr && root->right == nullptr)
            depth = max(depth, d);
        depthFunc(root->left, d + 1);
        depthFunc(root->right, d + 1);
    }
};
// @lc code=end
