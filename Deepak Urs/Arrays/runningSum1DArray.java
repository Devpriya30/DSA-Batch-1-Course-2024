class Solution {
    public int[] runningSum(int[] nums) {
        int sm = 0;
        int[] res = new int[nums.length]; 

        for(int i = 0; i < nums.length; i++) {
            sm += nums[i];
            res[i] = sm;
        }

        return res;
    }
}