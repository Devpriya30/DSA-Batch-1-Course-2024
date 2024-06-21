class Solution {
public:
    int timeRequiredToBuy(vector<int>& nums, int k) {
        int time = 0;
        for (int i = 0; i < nums.size(); i++) {
            int temp = nums[k];
            if (i <= k) {
                time += min(nums[i], nums[k]);

            } else {
                time += min(nums[i], nums[k] - 1);
            }
        }
        return time;
    }
};