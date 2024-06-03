class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int min=INT_MIN ;
     int sum=0,i=0;
     while(i<nums.size())
     {
        sum+=nums[i];
        min=max(min,sum);
        if(sum<0)
        sum=0;
        i++;
     }
     return min;
    }
};
time complexity: O(n)
space complexity :O(1)
