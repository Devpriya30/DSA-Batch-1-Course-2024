class Solution {
    public int[] shuffle(int[] nums, int n) {
        int nL = nums.length;
        int[] res = new int[nL];
        int st = 0;
        int en = st+n;

        for(int i = 0; i < res.length; i++) {
            res[i] = nums[st];
            res[i+1] = nums[en];
            i += 1;
            st += 1;
            en += 1;
        }

        return res;

    }
}