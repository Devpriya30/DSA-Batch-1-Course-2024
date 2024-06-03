class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int min=-(pow(2,31)-1) ;
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
