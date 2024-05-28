/// Brute Force

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n,0);
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(nums[i]>nums[j])
                    res[i]++;
            }
        }
        return res;
    }
};

Time Complexity : O(n^2)
Space Complexity : O(n)

/// Optimised
