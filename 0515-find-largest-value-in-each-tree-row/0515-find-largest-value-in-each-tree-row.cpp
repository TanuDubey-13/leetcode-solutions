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
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*> q;
        if(root == NULL) return {};
        vector<int> res;
        q.push(root);
        while(!q.empty()) {
            int size = q.size();
            int max_val = INT_MIN;
            for(int i = 0; i < size; i++) {
                root = q.front();
                q.pop();
                max_val = max(max_val, root->val);
                if(root->left != NULL) {
                    q.push(root->left);
                }
                if(root->right != NULL) {
                    q.push(root->right);
                }
            }
            res.push_back(max_val);
        }
        return res;
    }
};
