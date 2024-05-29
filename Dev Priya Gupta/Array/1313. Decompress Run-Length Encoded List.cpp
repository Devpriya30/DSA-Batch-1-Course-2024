class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i+=2)  /// Time Complexity : O(n/2)
        {
            for(int j=1;j<=nums[i];j++)   /// Time Complexity in worst case O(100)
                ans.push_back(nums[i+1]);
        }
        return ans;
    }
};

Time Complexity : 
Space Complexity : O(n)
