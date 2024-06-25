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




class Solution {
    public int calPoints(String[] operations) {
        int index = 0;
        int[] scores = new int[operations.length];
        
        for(String operation : operations){
            if(operation.equals("+")){
                scores[index] = scores[index-1] + scores[index-2];
                index++;
            }
            else if(operation.equals("C")){
                --index;
            }
            else if(operation.equals("D")){
                scores[index] = 2 * scores[index - 1];
                ++index;
            }
            else{
                scores[index] = Integer.parseInt(operation);
                ++index;
            }
        }
        int score = 0;
        for(int i = 0; i < index; i++){
            score += scores[i];
        }
        return score;
    }
}
