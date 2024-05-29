class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum;
  
        int asum=0;

        for(int i = 0; i < nums.size();i++){
            asum  += nums[i];
            sum.push_back(asum);
        }
        return sum;
    }
};
