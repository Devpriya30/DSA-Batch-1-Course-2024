class MinStack {
    int min = Integer.MAX_VALUE;
    Stack<Integer> stack = new Stack<Integer>();
    public void push(int x) {
        if(x <= min){          
            stack.push(min);
            min=x;
        }
        stack.push(x);
    }

    public void pop() {
        if(min==stack.pop()){
            min=stack.pop();
        }
    }

    public int top() {
        return stack.peek();
    }

    public int getMin() {
        return min;
    }
}
//time=O(1)
//time=O(n)
