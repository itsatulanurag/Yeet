/*
 * @lc app=leetcode id=101 lang=cpp
 *
 * [101] Symmetric Tree
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
    bool isSymmetric(TreeNode *root)
    {
        if (root == nullptr)
            return 1;
        return check(root->left, root->right);
    }
    bool check(TreeNode *p, TreeNode *q)
    {
        if (p == nullptr && q == nullptr)
            return 1;
        else if (p == nullptr || q == nullptr)
            return 0;
        else if (p->val != q->val)
            return 0;
        return check(p->left, q->right) && check(p->right, q->left);
    }
};
// @lc code=end
