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
    vector<vector<int>> res;
    void fun(TreeNode* root, int sum, int target, vector<int> v){
        if(root==NULL) return;
        sum+=root->val;
        v.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            if(sum==target)
            res.push_back(v);
            v.pop_back();
            return;
        }
        fun(root->left, sum, target, v);
        fun(root->right, sum, target, v); 
        v.pop_back();
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> v;
        fun(root, 0, targetSum, v);
        return res;
    }
};