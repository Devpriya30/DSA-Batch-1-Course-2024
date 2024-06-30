import java.util.*;

class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int i = 0, j = 0;
        int size = nums.length;
        int sum = 0;
        int ans = Integer.MAX_VALUE;

        while (j < size) {
            sum += nums[j];

            while (sum >= target) {
                ans = Math.min(ans, j - i + 1);
                sum -= nums[i];
                i++;
            }

            j++;
        }

        return ans != Integer.MAX_VALUE ? ans : 0;
    }
}