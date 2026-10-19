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

class Solution {
public:
    int res = 0;

    int height(TreeNode* root) {
        if (root == NULL) return 0;
        int left = height(root->left);
        int right = height(root->right);
        int sum = left + right;
        res = max(res, sum);
        return 1 + max(left, right);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        res = 0;  // Reset before each test case
        height(root);
        return res;
    }
};
