import java.util.*;

class Solution {
    public int maxVowels(String s, int k) {
        int i = 0;
        int j = 0;
        int size = s.length();
        int res = 0;
        int ctr = 0;

        while(j < size) {
            char c = s.charAt(j);
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                ctr += 1;
            }

            if (j-i+1 == k) {
                res = res > ctr ? res : ctr;
                
                char ch = s.charAt(i);
                if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    ctr -= 1;
                }
                i += 1;
            }

            j += 1;
        }

        return res;
    }
}