import java.util.*;

class Solution {
    public List<Integer> majorityElement(int[] nums) {
        List<Integer> res = new ArrayList<Integer>();
        int freq = (nums.length) /3;
        Map<Integer, Integer> mp = new HashMap<Integer, Integer>();

        for(int i = 0; i < nums.length; i++) {
            if(mp.containsKey(nums[i])) {
                mp.put(nums[i], mp.get(nums[i])+1);
            }
            else {
                mp.put(nums[i], 1);
            }
        }

        // System.out.println(mp);
        for(int key: mp.keySet()) {
            if(mp.get(key) > freq) {
                res.add(key);
            }
        }

        return res;
    }
}