class Solution {
public:
 void swap(vector<int>& arr, int i, int j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    void sortColors(vector<int>& nums) {
        int n =nums.size();
        int low=0; 
        int mid =0; 
        int high = n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums,low, mid );
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums, mid, high);
                high--;
            }
        }
    }
};