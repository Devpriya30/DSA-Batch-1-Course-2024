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
    TreeNode* solve(TreeNode* root,int val){
        if(root==NULL){
            return NULL;
        }
        if(root->val==val){
            return root;
        }
        if(root->val<val){
            return solve(root->right,val);
        }
        else{
            return solve(root->left,val);
        }
        return NULL;
    }
    void dfs(TreeNode* root,vector<int>&result){
        if(root==NULL){
            return;
        }
        result.push_back(root->val);
        dfs(root->left,result);
        dfs(root->right,result);

        return;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* temp=solve(root,val);
        return temp;
    }
};
