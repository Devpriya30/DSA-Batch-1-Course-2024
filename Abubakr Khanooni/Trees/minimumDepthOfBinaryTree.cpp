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
    int ans;
    void solve(TreeNode* root,int lvl){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            ans=min(ans,lvl);
        }

        solve(root->left,lvl+1);
        solve(root->right,lvl+1);

        return;
    }
    int minDepth(TreeNode* root) {
        if(root==NULL)return 0;
        ans=10000000000;
        int lvl=0;
        solve(root,0);

        return ans+1;
    }
};
