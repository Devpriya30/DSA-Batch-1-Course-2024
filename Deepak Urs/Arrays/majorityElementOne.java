import java.util.*;


class Solution {
    public int majorityElement(int[] nums) {
        int freq = nums.length/2;
        int res = -1;
        Map<Integer, Integer> mp = new HashMap<Integer, Integer>();

        for(int i = 0; i < nums.length; i++) {
            if(mp.containsKey(nums[i])) {
                mp.put(nums[i], mp.get(nums[i])+1);
            }
            else {
                mp.put(nums[i], 1);
            }
        }

        System.out.println(mp);

        for(int key: mp.keySet()) {
            if(mp.get(key) > freq) {
                res = mp.get(key) > res ? key : res;
            }
        }

        return res;
    }
}