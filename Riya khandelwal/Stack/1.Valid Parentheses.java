class Solution {
    public boolean isValid(String s) {
       Stack<Character> stack  = new Stack<>(); //can write linkedlist in place of stack
       char[] st = s.toCharArray();
       for(int i=0 ;i<st.length; i++)
       {
        if(st[i]== '[')
        {
            stack.push(']');
        }
        else if(st[i]== '{')
        {
            stack.push('}');
        }
        else if(st[i]=='(')
        {
            stack.push(')');
        }
        else
        {
            if(stack.isEmpty() || st[i] != stack.peek() )
            {
                return false;
            }
            stack.pop();

        }
       } 
       return stack.isEmpty();
    }
}

//T.C = O(n)

//S.C = O(n)
