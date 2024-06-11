class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                cnt++;
            }
        }
        if(cnt==0){
            return 1;
        }
        // jo negative hai aur size se zyada hai unko 1 karo
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=0 || nums[i]>nums.size()){
                nums[i]=1;
            }
        }
        
        for(int i=0;i<nums.size();i++){
            int index=abs(nums[i]);
            
            if(index==nums.size()){
                nums[0]=-nums[0];
            }
            
            else{
                nums[index]=-abs(nums[index]);
            }
        }
        int i;
        for(i=1;i<nums.size();i++){
            if(nums[i]>0){
                return i;
            }
        }
        if(nums[0]>0){
            return nums.size();
        }
        
        return nums.size()+1;
    }
};
