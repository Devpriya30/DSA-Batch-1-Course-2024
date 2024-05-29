class Solution {
    public int[] getConcatenation(int[] nums) {
        int nL = nums.length;
        int[] res = new int[nL*2];
        
        for(int i = 0; i < res.length; i++) {
            res[i] = nums[i%nL];
        }

        return res;
    }
}