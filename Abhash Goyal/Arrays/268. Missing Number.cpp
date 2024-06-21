class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> compare(n + 1);
        int result = -1;

        for (int i = 0; i < n; i++) {
            compare[i] = i;
        }

        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if (compare[i] != nums[i]) {
                result = compare[i];
                break;
            }
        }
        if (result == -1) {
            return n;
        }

        return result;
    }
};