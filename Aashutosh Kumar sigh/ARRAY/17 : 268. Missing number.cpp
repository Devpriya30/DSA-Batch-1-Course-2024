class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0,n=nums.size();
        int ans =(n*(n+1))/2;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        return ans-sum;
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(1)
