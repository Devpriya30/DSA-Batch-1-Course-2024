import java.util.*;

class Solution {
    public int longestOnes(int[] nums, int k) {
        int i = 0;
        int j = 0;
        int size = nums.length;
        int res = 0;
        int zc = 0;

        while(j < size){
            if(nums[j] == 0) {
                zc += 1;
            }

            if(zc <= k) {
                res = res > j-i+1 ? res : j-i+1;
                j += 1;
            }
            else if (zc > k) {
                while (zc > k) {
                    if(nums[i] == 0) {
                        zc -= 1;
                    }
                    i += 1;
                }
                j += 1;
            }
        }

        return res;
    }
}