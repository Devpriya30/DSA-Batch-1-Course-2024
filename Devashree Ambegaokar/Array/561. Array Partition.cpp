class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i=i+2){
            sum+=nums[i];
        }

      return sum;  
    }
};
//time complexity  = O(nlogn) and space complexity = O(1)