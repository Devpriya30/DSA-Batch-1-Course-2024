class Solution {
    public int calPoints(String[] operations) {
        Stack<Integer> stack = new Stack<>();
        
        for(String operation : operations){
            if(operation.equals("+")){
                int a = stack.pop();
                int b = stack.pop();
                int c = a + b;
                stack.push(b);
                stack.push(a);
                stack.push(c);
            }
            else if(operation.equals("C")){
                stack.pop();
            }
            else if(operation.equals("D")){
                stack.push(2 * stack.peek());

            }
            else{
                stack.push(Integer.parseInt(operation));
            }
        }
        int score = 0;
        while(!stack.isEmpty()){
            score+=stack.pop();
        }
        return score;
    }
}
