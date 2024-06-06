class Solution {
    public int[] twoSum(int[] nums, int target) {
        int i=0;
        int j=nums.length-1;
        int[] ind = new int[nums.length];
        for(int i=0;i<nums.length;i++)
        {
            in
        }
        Arrays.sort(nums);
        int[] arr = new int[2];
        while(i<j)
        {
            if(nums[i]+nums[j]>target)
            {
                j--;
            }
            else if (nums[i]+nums[j]<target)
            {
                i++;
            }
            else
            {
                arr[0] = i;
                arr[1] = j;
            }

        }
        return arr;
    }
}
