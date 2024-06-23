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
    int sum;
    void solve(TreeNode* root,bool flag){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL && flag){
            sum+=root->val;
        }

        solve(root->left,true);
        solve(root->right,false);

        return;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        sum=0;
        solve(root->left,true);
        solve(root->right,false);
        return sum;
    }
};
