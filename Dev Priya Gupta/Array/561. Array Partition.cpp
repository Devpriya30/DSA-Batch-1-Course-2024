class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<nums.size();i+=2)
        {
            sum+=nums[i];
        }
        return sum;
    }
};

Time Complexity : O(n log(n)) + O(n) = O(n log(n))
Space Complexity : O(1)
