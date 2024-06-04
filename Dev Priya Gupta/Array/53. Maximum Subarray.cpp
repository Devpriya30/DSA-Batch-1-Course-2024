class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m=nums[0],s=0;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            m=max(m,s);
            if(s<0)
                s=0;
        }
        return m;
    }
};

Time Complexity : O(n)
Space Complexity : O(1)
