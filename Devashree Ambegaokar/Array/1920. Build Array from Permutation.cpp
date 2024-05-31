class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        for(int i = 0; i<n; i++){
            result.push_back(nums[nums[i]]);
        }
        return result;
    }
};

//Time and Space Complexity is O(N)