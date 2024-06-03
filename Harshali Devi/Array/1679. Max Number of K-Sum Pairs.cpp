//Day 3
//Question 23
//https://leetcode.com/problems/max-number-of-k-sum-pairs/

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n =nums.size();
        int l=0;
        int r=nums.size()-1;
        int output=0;
        sort(nums.begin(),nums.end());
        while(r>l){
            if(nums[l]+nums[r]==k){
                output++;
                l++;
                r--;
            }
            else if(nums[l]+nums[r]>k){
                r--;
            }
            else{
                l++;
            }
        }
        return output;

    }
};

//Time Complexity -> O(n)
