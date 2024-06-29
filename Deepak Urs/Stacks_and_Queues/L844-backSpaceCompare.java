import java.util.*;

class Solution {
    public boolean backspaceCompare(String s, String t) {
        Stack<Character> sS = new Stack<>();
        Stack<Character> tS = new Stack<>();

        for(int i = 0; i < s.length() ; i++) {
            char c = s.charAt(i);
            if(c == '#' && sS.size() > 0) {
                sS.pop();
            }
            else if (c != '#') {
                sS.add(c);
            }
        }

        for(int i = 0; i < t.length(); i++) {
            char c = t.charAt(i);
            if(c == '#' && tS.size() > 0) {
                tS.pop();
            }
            else if (c != '#') {
                tS.add(c);
            }
        }
        
        if(sS.size() == tS.size()) {
            for(int i = 0; i < sS.size(); i++) {
                if(sS.get(i) != tS.get(i)) {
                    return false;
                }
            }
        }
        else {
            return false;
        }

        return true;
    }
}