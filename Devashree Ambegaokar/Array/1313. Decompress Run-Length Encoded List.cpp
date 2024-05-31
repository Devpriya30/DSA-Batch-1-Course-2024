class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>ans;
        for(int i=0; i<nums.size(); i=i+2){
            for(int j=0; j<nums[i]; j++){
                ans.push_back(nums[i+1]);
            }
        }
       return ans; 
    }
};
//time complexity = O(n^2) and space complexity = o(n)