/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans=NULL;
    void fun(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root==NULL) return;
        if(root==p || root ==q){
            ans=root;
            return;
        }
        if(root->val < p->val)
        fun(root->right, p, q);
        else if(root->val > q->val)
        fun(root->left, p, q);
        else{
            ans= root;
            return;
        }
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(p->val < q->val)
        fun(root, p, q);
        else
        fun(root, q, p);
         return ans;
    }
};