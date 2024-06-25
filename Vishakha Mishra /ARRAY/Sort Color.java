class Solution {
    public void sortColors(int[] nums) {
        int[] count = new int[3];
        for(int i=0;i<nums.length;i++){
            count[nums[i]]=count[nums[i]]+1;
        }
        for(int i=0,j=0;i<3;i++){
            int cnt = count[i];
            for(int k=1;k<=cnt;k++){
                nums[j]=i;
                j++;
            }
        }
    }
}
