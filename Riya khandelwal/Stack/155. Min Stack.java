class MinStack {
    Stack<Integer> minStack;
    int[] minarray = new int[2];

    public MinStack() {
       minStack = new Stack<>();
    }
    
    public void push(int val) {
        
        minStack.push(val);
    }
    
    public void pop() {
        minStack.pop() ;       
    }
    
    public int top() {
        return minStack.peek();
        
    }
    
    public int getMin() {
        // for(int i=0;i<minStack.size();i++);
        // {
        //    minarray[1] = minStack.push(val);
        //    minarray[2] = minarray[2] >= minarray[1] ? minarray[1] :minarray[2]
        // }
        

  
    Integer[] arr = new Integer[minStack.size()];
    minStack.toArray(arr);
    int min=arr[0];
    for(int i =0 ;i<arr.length;i++)
    { 
        min= Math.min(arr[i],min);
    }
    
    return min;    
    }
}

//T.C = O(n)

//S.C = O(n)

