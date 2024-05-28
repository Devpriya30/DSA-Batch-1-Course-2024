//Day 1
//Question 7
//https://leetcode.com/problems/running-sum-of-1d-array/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>sum;
        int val=0;
    
        for(int i=0;i<nums.size();i++){
            val=val+nums[i];
            sum.push_back(val);
        }

        return sum;
    }
};

//Time Complexity -> O(n)
