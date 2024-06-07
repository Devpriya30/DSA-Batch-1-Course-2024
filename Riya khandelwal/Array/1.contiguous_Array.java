class Solution {
    public int findMaxLength(int[] nums) {
        int l= nums.length;
        int maxlength=0;
        int sum = 0;
        Map<Integer,Integer> map = new HashMap<>();
        map.put(sum,-1);
        for(int i=0;i<l;i++)
        {   sum += nums[i] == 0 ? -1: 1;
            if(map.containsKey(sum))
            {
                
               
                int length= i - map.get(sum);
                maxlength = Math.max(length,maxlength);
            }
            else
            {
                map.put(sum,i);
            }

        }
        return maxlength;
    }
}

//T.C = O(n)

//S.C = O(1)
