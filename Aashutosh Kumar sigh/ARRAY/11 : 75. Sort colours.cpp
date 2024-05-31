class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start = 0,index = 0;
        int end = nums.size()-1;
        while(index<=end){
            if(nums[index]==0){
                swap(nums[index],nums[start]);
                ++index;
                ++start;
            }
            else if(nums[index]==1){
                ++index;
            }
            else{
                swap(nums[index],nums[end]);
                --end;
            }
        }
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(1)
