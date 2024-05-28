class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int res=0;
        int n=nums.size();
        vector<int> val(101,0);
        for(int i=0;i<n;i++)   
        {
            res+=val[nums[i]];
            val[nums[i]]++;
        }
        return res;
    }
};

Time Complexity : O(n)
Space Complexity : O(101) = O(1)
