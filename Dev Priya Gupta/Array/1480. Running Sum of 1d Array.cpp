class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> val(n,0);
        int s=0;
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
            val[i]=s;
        }
        return val;
    }
};

Time Complexity : O(n)
Space Complexity : O(n)

/// Reduced space Complexity
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++)
        {
            nums[i]+=nums[i-1];
        }
        return nums;
    }
};

Time Complexity : O(n)
Space Complexity : O(1)
