//Day 1
//Question 8 
//https://leetcode.com/problems/create-target-array-in-the-given-order/


class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector <int> output;
        int i=0;
        while(i<nums.size()){
             output.insert(output.begin()+index[i],nums[i]);
             i++;
        }
        return output;
    }
};

//Time Complexity -> O(n)
