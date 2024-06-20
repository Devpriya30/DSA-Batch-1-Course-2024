class Solution {
    public boolean isValid(String s) {
        Stack<Character> stack=new Stack<>();
        for(char str:s.toCharArray()){
            if(str=='('){
                stack.push(')');
            }
            else if(str=='{'){
                stack.push('}');
            }
            else if(str=='['){
                stack.push(']');
            }
            else{
                if(stack.isEmpty() || stack.peek()!=str){
                    return false;
                }
                else{
                    stack.pop();
                }
            }
        }
        return stack.isEmpty();
        
    }
}
//Time=O(n)
//Space=O(n)
