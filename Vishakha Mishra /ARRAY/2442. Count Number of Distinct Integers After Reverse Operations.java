class Solution {
    public int countDistinctIntegers(int[] nums) {
        int n=nums.length;
        HashSet<Integer> set = new HashSet<>();
        for(int num : nums){
            set.add(num);
            int r = 0;
            while (num != 0) {
            int digit = num % 10;
            r = r * 10 + digit;
            num /= 10;
            }
            set.add(r);
        }
        return set.size();
    }
}
