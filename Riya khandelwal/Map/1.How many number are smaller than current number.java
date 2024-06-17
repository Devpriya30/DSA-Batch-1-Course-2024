class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        int[] arr = new int[nums.length];
        Map<Integer,Integer> map = new HashMap<>();
        for(int i=0;i<nums.length;i++)
        {
            int c = 0;
            for(int j=0;j<nums.length;j++)
            {
                    if(nums[j]<nums[i])
                    {
                        c=c+1;
                    }
                    map.put(i,c);    
            }
        }
        for(int key: map.keySet())
        {
          arr[key] = map.get(key);
        }
    return arr;    
    }

}

//T.C  = O(n^2)

//S.C = O(n)

//TAKE KEY AS INDEX AND VALUE AS COUNT(OF SMALLER THAN CURRENT NUMBER)
