//Day 6
//Question 35
//https://leetcode.com/problems/4sum/

//Better Solution

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        
        vector<vector<int>>arr;

        sort(nums.begin(), nums.end());

        for(int i=0;i<n-3;i++){

            if(i>0 && nums[i]==nums[i-1]) continue;                                            //Skip duplicates
            for(int j=i+1;j<n-2;j++){
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;                            //Skip duplicates
                int left=j+1; 
                int right = n-1;
                while(left<right){
                    long long ele = (long long)nums[i] + nums[j] + nums[left] + nums[right];
                    if(ele==target){
                        arr.push_back({nums[i],nums[j],nums[left],nums[right]});
                        while(left<right && nums[left]==nums[left+1])left++;               //Skip dupticates
                        while(left<right && nums[right]==nums[right-1])right--;
                        left++;
                        right--;
                    }
                    else if(ele>target){
                        right--;
                    }
                    else{
                        left++;
                    }
                }
            }
        }

        return arr;
    }
};

//Find more optimized approach
//Optimized Approach
