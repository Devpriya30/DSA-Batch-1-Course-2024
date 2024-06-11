class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i=n-1;
        while(i>=1){
            if(nums[i-1]>=nums[i]){
                i--;
            }
            else{
                break;
            }
        }
        if(i==0){
            n=n-1;
            while(i<n){
                swap(nums[i++],nums[n--]);
            }
        }
        else{
        int val=nums[i-1];
        int j=n-1,min;
        while(j!=i){
            if(nums[j]>val){
                break;
            }
            j--;
        }
        swap(nums[i-1],nums[j]);
        j=n-1;
        while(i<j){
            swap(nums[i++],nums[j--]);
        }
        }
        

    }
};
