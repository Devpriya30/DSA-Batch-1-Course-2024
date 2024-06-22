class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result;
        if (!root) return result;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int s = q.size();
            double sum = 0;

            for (int i = 0; i < s; ++i) {
                TreeNode* temp = q.front();
                q.pop();
                sum += temp->val;

                if (temp->left) {
                    q.push(temp->left);
                }
                if (temp->right) {
                    q.push(temp->right);
                }
            }
            result.push_back(sum / s);
        }

        return result;
    }
};
