class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;){
            if(nums[i]==nums[i+1])
            return nums[i];
            else
            i++;
        }
        return 0;
    }
};

//The problem can be solved by sorting although it is instructed not to modify the array

TIME COMPLEXITY : O(n log n)
SPACE COMPLEXITY : O(1)
