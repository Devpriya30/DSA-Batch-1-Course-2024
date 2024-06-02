//Day 5
//Question 30
//https://leetcode.com/problems/next-permutation/

//Approach 1 -> Using built-in function next_permuation

class Solution {
public:
    void nextPermutation(std::vector<int>& nums) {
        // Find the next lexicographically greater permutation
        bool has_next_permutation = next_permutation(nums.begin(), nums.end());
        
        // If there's no next permutation, rearrange to the first (sorted) permutation
        if (!has_next_permutation) {
            std::sort(nums.begin(), nums.end());
        }
    }
};

//Approach 2

