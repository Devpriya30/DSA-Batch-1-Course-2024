class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        vector<int> val(101,0);
        for(int i=0;i<n;i++)   
        {
            count+=val[nums[i]];
            val[nums[i]]++;
        }
        return count;
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(101) = O(1)
