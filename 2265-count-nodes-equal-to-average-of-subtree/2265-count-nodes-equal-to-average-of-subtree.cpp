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
 
 int number_of_nodes(TreeNode* root){
    if(root==NULL)  return 0;
  int l=number_of_nodes(root->left);
  int r= number_of_nodes(root->right);
  return l+r+1;
 }
int sum_of_nodes(TreeNode* root){
 if(root==NULL)  return 0;
  int l=sum_of_nodes(root->left);
  int r= sum_of_nodes(root->right);
  return l+r+root->val;
}


class Solution {
public:
    int averageOfSubtree(TreeNode* root) {
        int count=0;
        if(root==NULL) return 0;
       int sum= sum_of_nodes(root);
       int n = number_of_nodes(root);
       int avg=sum/n;
       if(avg==root->val)
       count++;

        count+= averageOfSubtree(root->left);
        count+=averageOfSubtree(root->right);
    return count;
    }
};