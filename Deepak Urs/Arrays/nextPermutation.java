class Solution {
    private void reverse(int st, int en, int [] nums) {
        while(st < en) {
            int temp = nums[st];
            nums[st] = nums[en];
            nums[en] = temp;
            st++;
            en--;
        }
    }

    private void swap(int st, int en, int [] nums) {
        int temp = nums[st];
        nums[st] = nums[en];
        nums[en] = temp;
    }

    public void nextPermutation(int[] nums) {
       int i = nums.length - 2;

       while(i >=0 && nums[i] >= nums[i+1]){
            i--;
       } 

       if(i == -1) {
        reverse(0,nums.length-1, nums);
       }
       else {
        int j = nums.length-1;

        while(j > i && nums[j] <= nums[i]) {
            j--;
        }

        swap(i, j, nums);
        reverse(i+1, nums.length-1, nums);
       }
    }
}