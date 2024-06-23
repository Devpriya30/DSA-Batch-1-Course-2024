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
    bool solve(TreeNode* root,int targetSum,int sum){
        if(root==NULL){
            return false;
        }
        if(root->left==NULL && root->right==NULL){
            return sum+root->val==targetSum;
        }

        return solve(root->left,targetSum,sum+root->val) || solve(root->right,targetSum,sum+root->val);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL){
            return 0;
        }
        return solve(root,targetSum,0);
    }
};
