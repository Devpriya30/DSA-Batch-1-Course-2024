class Solution {
    public int majorityElement(int[] nums) {
        Map<Integer,Integer> map = new HashMap<>();
        int majorityElement = nums[0];
        //int[] arr =new int[nums.length];
        int max = 0;
        for(int num:nums)
        {
            if(map.containsKey(num))
            {
                map.put(num,map.get(num)+1);
            }
            else
            {
                map.put(num,1);
            }
        }
        for(Map.Entry<Integer,Integer> entry : map.entrySet())
        {
            if(entry.getValue()>max)
            {
                max = entry.getValue();
                majorityElement = entry.getKey();

            }
        }
        return majorityElement;
    }
}

//T.C = O(n)

//S.C = O(n)
