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
    TreeNode* prev=NULL;
    int wrong = 0;
    TreeNode* w1first = NULL;
    TreeNode* w1second = NULL;
    TreeNode* w2first = NULL;
    TreeNode* w2second = NULL;
    void fun(TreeNode* root){
        if(root==NULL) return;
        fun(root->left);
        if(prev==NULL) prev=root;
        else{
            if(root->val < prev->val){
                if(wrong==0) {
                    w1first = prev;
                    w1second = root;
                    wrong++;
                }
                else{
                    w2first=prev;
                    w2second = root;
                    wrong++;
                }
            }
            prev=root;
        }
        fun(root->right);
    }
    void recoverTree(TreeNode* root) {
        fun(root);
        if(wrong==1)
        swap(w1first->val,w1second->val);
        else
        swap(w1first->val, w2second->val);
        return;
    }
};