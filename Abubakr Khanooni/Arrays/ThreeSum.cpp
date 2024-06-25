class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < nums.size(); i++) {
            int target = -(nums[i]);
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                if (nums[j] + nums[k] == target) {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    while (j < k && nums[j] == nums[j + 1]) j++;
                    while (j < k && nums[k] == nums[k - 1]) k--;
                    j++;
                    k--;
                }
                else if (nums[j] + nums[k] > target) {
                    k--;
                }
                else {
                    j++;
                }
            }
            while (i + 1 < nums.size() && nums[i + 1] == nums[i]) {
                i++;
            }
        }
        return ans;
    }
};