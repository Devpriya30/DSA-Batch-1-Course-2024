class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       int sum=0,m=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            nums[i]=sum;
        }
        return nums;
    }
};


Time cpmlexity:O(n)
spcae complexity:O(1)
