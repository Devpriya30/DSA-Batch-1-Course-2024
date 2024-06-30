import java.util.*;

class Solution {
    public int numSubarrayProductLessThanK(int[] nums, int k) {
        if (k <= 1) {
            return 0;
        }
        int i = 0, j = 0, res = 0;
        int size = nums.length;
        int pr = 1;

        while(j < size) {
            pr *= nums[j];

            while(pr >= k) {
                pr = pr/nums[i++];
            }
            res += j-i+1;

            j += 1;
        }

        return res;

    }
}