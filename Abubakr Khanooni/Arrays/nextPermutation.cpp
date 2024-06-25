class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int goal_index = -1;
        for(int i = n - 1; i > 0; i--) {
            if(nums[i] > nums[i - 1]) {
                goal_index = i - 1;
                break;
            }
        }
        if(goal_index != -1) {
            int swap_index = goal_index;
            for(int j = n - 1; j > goal_index; j--) {
                if(nums[j] > nums[goal_index]) {
                    swap_index = j;
                    break;
                }
            }
            swap(nums[goal_index], nums[swap_index]);
        }
        reverse(nums.begin() + goal_index + 1, nums.end());
    }
};