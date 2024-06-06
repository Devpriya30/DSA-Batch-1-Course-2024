class Solution {
    public int findPeakElement(int[] nums) {
        int l = nums.length;
        int max = nums[0];
        int maxIndex = 0; 

        for (int i = 1; i < l; i++) {
            if (nums[i] > max) {
                max = nums[i];
                maxIndex = i;
            }
        }
        return  maxIndex ;
    }
} 
//T.C = O(n)

//S.C = O(1)
