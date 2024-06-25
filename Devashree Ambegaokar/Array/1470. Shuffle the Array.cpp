class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        for(int i=0; i<n; i++){
            ans[2*i] = nums[i];
            ans[2*i+1] = nums[n+i];
        }
       return ans; 
    }
};
//Time and Space Complexity = O(N)