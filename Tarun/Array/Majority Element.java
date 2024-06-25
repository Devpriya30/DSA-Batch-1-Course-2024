class Solution {
    public int majorityElement(int[] nums) {
        int n = nums.length;
        Map<Integer, Integer> map = new HashMap<>();
        for (int x : nums) {
            map.put(x, map.getOrDefault(x, 0) + 1);
        }
        for (int i = 0; i < n; i++) {
            if (map.get(nums[i]) > n / 2) {
                return nums[i];
            }
        }       
        return 0; 
    }
}

Space Complexity: O(n)
Time Complexity: O(n)
