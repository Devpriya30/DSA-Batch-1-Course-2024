class Solution {
 public:
  vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    vector<int> v;
    for (int i = 0; i < nums.size(); ++i)
      v.insert(v.begin() + index[i], nums[i]);
    return v;
  }
};

TIME COMPLEXITY : O(n^2)
SPACE COMPLEXITY : O(n)
