/*
 * @lc app=leetcode id=110 lang=cpp
 *
 * [110] Balanced Binary Tree
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
class Solution
{
public:
    bool rs = true;
    bool isBalanced(TreeNode *root)
    {
        if (root == nullptr)
            return rs;
        int temp = check(root); //temp has the height of the tree
        return rs;
    }
    int check(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        if (rs == false)
            return 0;
        int left = check(root->left);
        int right = check(root->right);
        if (abs(left - right) > 1)
            rs = false;
        return max(left, right) + 1;
    }
};

// basically calculation the height of the tree and checking it at the same time if the tree is balanced

// @lc code=end