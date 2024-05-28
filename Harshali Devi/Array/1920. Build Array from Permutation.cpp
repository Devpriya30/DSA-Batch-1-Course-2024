//Day 1
//Question 1
//https://leetcode.com/problems/build-array-from-permutation

//Method 1
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector <int> output;
        for (int i=0;i<nums.size();i++){
            output.insert(output.begin()+i,nums[nums[i]]);
        }
        return output;
    }
};

//Time Complexity -> O(n**2) -> (for loop ) ** (insert function)


//Method 2
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector <int> output(n,0);
        for (int i=0;i<n;i++){
            output[i]=nums[nums[i]];
        }
        return output;
    }
};

//Time Complexity -> O(n) -> (for loop)

