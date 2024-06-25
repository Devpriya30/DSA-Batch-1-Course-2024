class Solution {
    public int majorityElement(int[] nums) {
        // Arrays.sort(nums);
        // int n = nums.length;
        // return nums[n/2];
        HashMap<Integer, Integer> map = new HashMap<>();
        int n = nums.length;
         for (int num : nums) {
            map.put(num, map.getOrDefault(num, 0) + 1);
        }
        for (int key : map.keySet()) {
            if (map.get(key) > n / 2) {
                return key;
            }
        }
        return -1;
    }
}
