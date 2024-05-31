class Solution {
    public int numIdenticalPairs(int[] nums) {
        int i,j,c=0;
        for(i=0;i<nums.length;i++){
            for(j=i;j<nums.length;j++){
                if(nums[i]==nums[j] && i<j){
                    c=c+1;
                }
            }
        }
        return c;
    }
}
