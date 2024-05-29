class Solution {
    public void swap(int[] nums, int a, int b)
    {
        int temp=nums[a];
        nums[a]=nums[b];
        nums[b]=temp;
    }
    public void sortColors(int[] nums) {
        int start = 0;
        int end = nums.length-1;
        int index = 0;
        while(index <= end)
        {
            if(nums[index]==0)
            {
                swap(nums,start,index);
                index++;
                start++;
            }
            else if(nums[index]==2)
            {
                swap(nums,end,index);
                end--;
            }
            else
            index++;
        }
    }
}
