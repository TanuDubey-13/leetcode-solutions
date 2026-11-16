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
    int minDiffInBST(TreeNode* root) {
        int prev = -1;
        int res = INT_MAX;
        stack<TreeNode*> s;

        while(!s.empty() || root != NULL) {

            while(root != NULL) {
                s.push(root);
                root = root->left;
            }

            root = s.top();
            s.pop();

            if(prev != -1) {
                res = min(res, root->val - prev);
            }

            prev = root->val;
            root = root->right;
        }

        return res;
    }
};
