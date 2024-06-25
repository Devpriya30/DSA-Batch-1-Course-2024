import java.util.*;

class Solution {
    public String removeDuplicates(String s) {
        Stack<Character> stk = new Stack<>();
        char[] ch = s.toCharArray();

        for(int i = 0; i < ch.length; i++) {
            if(stk.size() > 0 && ch[i] == stk.peek()) {
                while(stk.size() > 0 && ch[i] == stk.peek()) {
                    stk.pop();
                }
            }
            else {
                stk.push(ch[i]);
            }
        }

        
        String res = "";
        for(char i: stk) {
            res += i;
        }
        return res;
    }
}