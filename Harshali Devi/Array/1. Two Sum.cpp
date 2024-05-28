//Day 2
//Question 2
//https://leetcode.com/problems/two-sum/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>val;

        for(int i=0;i<nums.size();i++){
            int complement  = target - nums[i];

            if(val.find(complement)!=val.end()){
                return {val[complement],i};
            }

            else{
                val[nums[i]]=i;
            }
        }

        return {};
    }
};

//Time Complexity -> O(n)
