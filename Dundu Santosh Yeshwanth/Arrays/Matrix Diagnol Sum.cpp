class Solution {
public:
    int diagonalSum(vector<vector<int>>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            sum += nums[i][i] + nums[i][n-i-1];
        }
        if(n%2) sum-=nums[n/2][n/2];
        return sum;
    }
};
