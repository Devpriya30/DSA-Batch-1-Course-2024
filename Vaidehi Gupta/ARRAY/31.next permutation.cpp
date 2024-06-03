class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-2;
        while(i>=0 && (nums[i]>=nums[i+1])){
            --i;
        }  
        if(i==-1){
            reverse(nums.begin(),nums.end());
        }
        else{
            int j=nums.size()-1;
            while(j>i){
                if(nums[j]>nums[i]){
                    swap(nums[i],nums[j]);
                    break;
                }
                j--;
            }
            reverse(nums.begin()+i+1,nums.end());
        }
    }
};

Time complexity: O(n)
space complexity: O(1)
