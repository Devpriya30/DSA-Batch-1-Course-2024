//Day 2
//Question 15
//https://leetcode.com/problems/array-partition/

class Solution {
public:
    int arrayPairSum(std::vector<int>& nums) {
        // Step 1: Sort the array
        std::sort(nums.begin(), nums.end());
        
        // Step 2: Sum up the minimums of each pair
        int sum = 0;
        for (size_t i = 0; i < nums.size(); i += 2) {
            sum += nums[i];
        }
        
        return sum;
    }
};

//Time Complexity -> O(nlogn)
