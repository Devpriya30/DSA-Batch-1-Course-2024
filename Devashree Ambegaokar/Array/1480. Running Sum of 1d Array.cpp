class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n  =nums.size();
        for(int i =1; i<n; i++){
            nums[i] += nums[i-1];
        }
       return nums; 
    }
}; 
 //Time Complexity = O(N) and Space Complexity = O(1)
 
 
  class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n  =nums.size();
        vector<int>prefix(n);
        prefix[0] = nums[0];
        for(int i =1; i<n; i++){
            prefix[i] = prefix[i-1] + nums[i];
        }
       return prefix; 
    }
};
//Time ans Space Complexity = O(N)