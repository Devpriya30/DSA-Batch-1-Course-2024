class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;
        for(int i=0;i<nums.size();i++)
        {
            target.insert(target.begin()+index[i],nums[i]);   // O(N)
        }
        return target;
    }
};

Time Complexity : O(n^2)
Space Complexity : O(n)
