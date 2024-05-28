//Day 1
//Question 9
//https://leetcode.com/problems/decompress-run-length-encoded-list/

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i+=2){
            while(nums[i]>0){
                v.push_back(nums[i+1]);
                nums[i]--;
            }
        }
        return v;
    }
};

//Time Complexity -> O(n**2)
