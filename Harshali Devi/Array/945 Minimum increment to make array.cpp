//Daily Challenge Problem June
//https://leetcode.com/problems/minimum-increment-to-make-array-unique/description/

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        if(nums.empty())return 0;
        sort(nums.begin(),nums.end());
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1] || nums[i]>nums[i+1]){
                int temp = nums[i+1];
                nums[i+1]=nums[i]+1;
                count+=nums[i+1]-temp;
            }
        }
        return count;
    }
};

//  Time Complexity -> O(nlogn).
