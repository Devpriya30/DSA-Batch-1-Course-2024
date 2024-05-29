class Solution {
    public List<Integer> majorityElement(int[] nums) {
        int size = nums.length;
        int result = size/3;
         List<Integer> majorityElements = new ArrayList<>();
        Map<Integer,Integer> mp = new HashMap<>();
        for (int i=0;i<size;i++)
        {
            if(mp.containsKey(nums[i]))
            {
                    mp.put(nums[i], mp.get(nums[i]) + 1);
            } else {
              
                mp.put(nums[i], 1);
            }
            
        }
           for (Map.Entry<Integer, Integer> entry : mp.entrySet()) {
            if (entry.getValue() > result) {
                majorityElements.add(entry.getKey());
            }
        }

        return majorityElements;
    }
}
Space Complexity: O(n)
Time Complexity: O(n)
