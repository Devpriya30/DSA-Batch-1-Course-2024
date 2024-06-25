import java.util.*;

class Solution {
    public boolean isValid(String s) {
        Stack<Character> stk = new Stack<>();
        char[] ch = s.toCharArray();

        for(int i = 0; i < s.length(); i++) {
            if(ch[i] == '}') {
                if(stk.size() > 0 && stk.peek() == '{') {
                    stk.pop();
                }
                else {
                    return false;
                }
            }
            else if(ch[i] == ')') {
                if(stk.size() > 0 && stk.peek() == '(') {
                    stk.pop();
                }
                else {
                    return false;
                }
            }
            else if(ch[i] == ']') {
                if(stk.size() > 0 && stk.peek() == '[') {
                    stk.pop();
                }
                else {
                    return false;
                }
            }
            else {
                stk.push(ch[i]);
            }
        }

        return stk.size() == 0;
        
    }
}