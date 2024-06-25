import java.util.*;

class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        Stack<Integer> stk = new Stack<>();
        int[] res = new int[nums1.length];
        Map<Integer, Integer> mp = new HashMap<>();

        for(int i = nums2.length-1; i > -1; i--) {
            if(stk.size() == 0) {
                mp.put(nums2[i], -1);
            }
            else if(stk.peek() > nums2[i]) {
                mp.put(nums2[i], stk.peek());
            }
            else if(stk.peek() <= nums2[i]) {
                while(stk.size() > 0 && stk.peek() <= nums2[i]) {
                    stk.pop();
                }

                if(stk.size() == 0) {
                    mp.put(nums2[i], -1);
                }
                else {
                    mp.put(nums2[i], stk.peek());
                }
            }

            stk.push(nums2[i]);
        }

        for(int i = 0; i < nums1.length; i++) {
            res[i] = mp.get(nums1[i]);
        }

        return res;

    }
}