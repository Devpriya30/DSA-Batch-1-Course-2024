class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int k= *max_element(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==k)
            return i;
        }
        return 0;
    }
};

//this could be one of the solution of the problem although Question says to solve it with time complexity O(log n) 
TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(1)
