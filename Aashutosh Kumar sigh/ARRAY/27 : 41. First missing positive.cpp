class Solution {
 public:
  int firstMissingPositive(vector<int>& nums) {
        int isone=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                isone++;
                break;
            }
        }
        if(isone==0)
          return 1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=0 || nums[i]>nums.size())
            nums[i]=1;
        }
        for(int i=0;i<nums.size();i++){
            int val=abs(nums[i]);
            if(val==nums.size()){
                nums[0]=-abs(nums[0]);
            }
            else{
                nums[val]=-abs(nums[val]);
            }
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]>0)
            return i;
        }
        return nums[0] > 0 ? nums.size() : nums.size()+1;
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(1)
