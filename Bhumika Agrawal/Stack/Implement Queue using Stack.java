class MyQueue {
    Stack<Integer>stack1;
    Stack<Integer>stack2;
    int front;
    public MyQueue() {
        stack1=new Stack<>();
        stack2=new Stack<>();
        front=-1;
        
    }
    
    public void push(int x) {
        if(stack1.isEmpty()){
            front=x;
        }
        stack1.push(x);
        
    }
    
    public int pop() {
        if(stack2.isEmpty()){
            while(!stack1.isEmpty()){
                stack2.push(stack1.pop());
            }
        }
        return stack2.pop();
        
    }
    
    public int peek() {
        return stack2.isEmpty()?front:stack2.peek();
    }
    
    public boolean empty() {
        return stack1.isEmpty() && stack2.isEmpty();
        
    }
}
//Time=O(1)
//space=O(n)

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * boolean param_4 = obj.empty();
 */
