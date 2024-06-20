class MyQueue {
        int front = -1;
        Stack<Integer> s1;
        Stack<Integer>s2;
    public MyQueue() {
         s1 = new Stack<>();
         s2 = new Stack<>();   
        
    }
    
    public void push(int x) {
        if(s1.isEmpty())
       {
         front = x;
       }
        s1.push(x);
    }
    
    public int pop() {
        if(s2.isEmpty())
        {
            while(!s1.isEmpty())
            {
                s2.push(s1.pop());
            }
        }
        return s2.pop();
    }
    
    public int peek() {
       int a = s2.isEmpty() ? front : s2.peek();
       return a;
        
    }
    
    public boolean empty() {
       return s1.isEmpty() && s2.isEmpty();
        
    }
}


//T.C = O(n)

//S.C = O(n)
