import java.util.*;

class Solution {
    public int numIdenticalPairs(int[] nums) {
        Map<Integer, Integer> mp = new HashMap<Integer, Integer>();

        for(int i = 0; i < nums.length; i++) {
            if(mp.containsKey(nums[i])) {
                mp.put(nums[i], mp.get(nums[i])+1);
            }
            else {
                mp.put(nums[i], 1);
            }
        }

        int sm = 0;
        for(int v: mp.values()) {
            sm += (v*(v-1))/2;
        }

        return sm;
    }
}