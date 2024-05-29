class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>a;
        a=nums;
        nums.clear();
      for(int i=0;i<n;i++) 
      {
        nums.push_back(a[i]);
        nums.push_back(a[i+n]);
      } 
      return nums;
    }
};
TIME COMPLEXITY:O(N)
  SPACE COMPLEXITY:O(N)
