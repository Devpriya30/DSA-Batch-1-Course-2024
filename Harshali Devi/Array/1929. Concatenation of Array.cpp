//Day 1
//Question 2
//https://leetcode.com/problems/concatenation-of-array

//Note -> The insert function modifies the vector by shifting elements to the right and adding the new element at the specified position, 
//which changes the size of the vector dynamically. 

//Method 1
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n+n);
        for(int i=0;i<n;i++){
            output[i]=nums[i];
            output[i + n] = nums[i];
        }
        return output;
    }
};

//Time Complexity -> O(n)

//Method 2
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> output(nums);
        output.insert(output.end(), nums.begin(), nums.end());
        return output;
    }
};

//Time Complexity -> O(n)
