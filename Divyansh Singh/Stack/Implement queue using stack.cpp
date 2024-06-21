class MyQueue {
public:
    stack<int>st1;
    stack<int>st2;
    int front;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(st1.empty()){
            front=x;
        }
        st1.push(x);
    }
    
    int pop() {
        if(st2.empty()){
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            int a=st2.top();
            st2.pop();
            return a;
        }
        int a=st2.top();
        st2.pop();
        return a;
    }
    
    int peek() {
        return st2.empty() ? front : st2.top();
    }
    
    bool empty() {
        if(st1.empty() && st2.empty()){
            return true;
        }
        return false;
    }
};

