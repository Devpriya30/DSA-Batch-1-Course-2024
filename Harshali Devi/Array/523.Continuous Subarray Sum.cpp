//Day 9
//Question 43
//https://leetcode.com/problems/continuous-subarray-sum/

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m={{0,-1}};
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem=sum%k;
            if(!m.count(rem)) m[rem]=i;
            else if(i-m[rem]>1) return true;
        }
        return false;

    }
};
