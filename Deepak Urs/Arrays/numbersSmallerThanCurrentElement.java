import java.util.*;

class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        int[] ns = new int[nums.length];
        for(int i = 0; i < nums.length; i ++) {
            ns[i] = nums[i];
        }
        int[] res = new int[nums.length];
        Arrays.sort(nums);

        Map<Integer, Integer> mp = new HashMap<Integer, Integer>();

        for(int i = 0; i < nums.length; i ++) {
            if(!mp.containsKey(nums[i])) {
                mp.put(nums[i], i);
            }
        }

        for(int j = 0; j < ns.length; j++) {
            res[j] = mp.get(ns[j]);
        }

        return res;



    }
}