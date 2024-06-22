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
private:
     int sumOne(TreeNode* root, int ans){

        if(root == nullptr) return 0;

        int elem = root -> val;
        ans = ans * 2 + elem;

        if(root -> left == NULL && root -> right == NULL){
            return ans;
        }

        int leftSum = sumOne(root -> left, ans);
        int rightSum = sumOne(root -> right, ans);

        return leftSum + rightSum;

    }
 
  
public:
    int sumRootToLeaf(TreeNode* root) {
        return sumOne(root, 0);
    }
};
