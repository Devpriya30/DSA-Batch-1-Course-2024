class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        int[] arr = new int[nums.length];
        for(int i = 0;i<nums.length;i++)
        {

            int sum =0;
            for(int j =0 ;j<nums.length;j++)
            {
                int c=0;
                if(nums[i]>nums[j])
                { 
                    c++;
                    sum += c;
                    arr[i] = sum;
                }
               
                
            }
            
        }
    return arr;
    }
}

// T.C = O(n^2)

//S.C = O(n)
