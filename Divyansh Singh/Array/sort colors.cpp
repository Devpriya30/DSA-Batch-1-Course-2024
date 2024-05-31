class Solution {
public:
    void sortColors(vector<int>& nums) {
      // using Dutch Flag Algorithm
        int i=0,start=0,end=nums.size()-1;
        while(i<=end){
            if(nums[i]==2){
                swap(nums[i],nums[end]);
                end--;
            }
            else if(nums[i]==0){
                swap(nums[i],nums[start]);
                i++,start++;
            }
            else{
                i++;
            }
        }
    }
};
