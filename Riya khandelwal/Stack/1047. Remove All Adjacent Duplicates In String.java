class Solution {
    public String removeDuplicates(String s) {
        Stack<Character> stack = new Stack<>();
        char[] st = s.toCharArray();

        for (int i = 0; i < st.length; i++) {
            if (!stack.isEmpty() && stack.peek() == st[i]) {
                stack.pop();
            } else {
                stack.push(st[i]);
            }
        }

        StringBuilder s1 = new StringBuilder();
        while (!stack.isEmpty()) {
            s1.append(stack.pop());
        }

        return s1.reverse().toString();
    }
}

//T.C = O(n)

//S.C = O(n)
