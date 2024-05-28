//Day 1
//Question 7
//https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n, 0); // Initialize the output vector with 0s

        for(int i = 0; i < n; i++){
            int count = 0;
            for(int j = 0; j < n; j++){
                if(nums[i] > nums[j]){
                    count++;
                }
            }
            output[i] = count;
        }

        return output;
    }
};

//Time Complexity -> O(n**2)
