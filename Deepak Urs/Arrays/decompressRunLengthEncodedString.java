import java.util.*;
;
class Solution {
    public int[] decompressRLElist(int[] nums) {
        List<Integer> res = new ArrayList<>();
        int i = 0;
        int n = nums.length;

        while (i < n) {
            int frequency = nums[i];
            int value = nums[i + 1];
            for (int j = 0; j < frequency; j++) {
                res.add(value);
            }
            i += 2;
        }

        int[] resultArray = new int[res.size()];
        for (int k = 0; k < res.size(); k++) {
            resultArray[k] = res.get(k);
        }

        return resultArray;
        
    }
}