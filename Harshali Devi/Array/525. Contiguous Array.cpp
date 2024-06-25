//Day 10
//Question 45
//https://leetcode.com/problems/contiguous-array/description/

//Brute Force

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int zero=0;
        int one=0;
        int maxlen=0;
        for(int i=0;i<nums.size();i++){
            zero=0;
            one=0;
            int j=i+1;
            if(nums[i]==0){
                zero++;
            }
            else{
                one++;
            }
            while(j<nums.size()){
                if(nums[j]==0){
                    zero++;
                }
                else{
                    one++;
                }
                if(zero==one){
                    maxlen = max(maxlen,(j-i+1));
                }
                j++;
            }
        }
        
        return maxlen;
    }
};

//Time Complexity -> O(n^2)

//Optimized Approach

