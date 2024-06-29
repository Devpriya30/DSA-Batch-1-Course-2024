import java.util.*;

class Solution {
    public int numOfSubarrays(int[] arr, int k, int threshold) {
        int i = 0;
        int j = 0;
        int size = arr.length;
        int res = 0;
        int sm = 0;

        while(j < size) {
            sm += arr[j];
            int w = j-i+1;

            if (w < k) {
                j += 1;
            }
            else if (w == k) {
                int avg = sm/k;
                if(avg >= threshold) {
                    res += 1;
                }
                sm -= arr[i];
                i += 1;
                j += 1;
            }
        }

        return res;
    }
}