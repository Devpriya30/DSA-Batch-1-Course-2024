// Method-1

class MinStack {
public:
    stack<pair<int,int>>st;
    stack<int>st1;
    MinStack() {
        
    }
    
    void push(int val) {
        pair<int,int>temp;
        if(st.empty()){
            temp.first=val;
            temp.second=val;
            st1.push(val);
            st.push(temp);
        }
        else{
            pair<int,int>p;
            p=st.top();
            
            if(p.second < val){
                temp.first=val;
                temp.second=p.second;
                st.push(temp);
                st1.push(val);
            } 
            else{
                temp.first=val;
                temp.second=val;
                st.push(temp);
                st1.push(val);
            }
            
        }
        
    }
    
    void pop() {
        st1.pop();
        st.pop();
       
    }
    
    int top() {
        return st1.top();
    }
    
    int getMin() {
        pair<int,int>temp;
        temp=st.top();
        return temp.second;
    }
};


// Method-2

class MinStack {
public:
    stack<pair<int,int>>st;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            st.push({val,val});
        }
        else{
           st.push({val,min(st.top().second,val)});
            
        }
        
    }
    
    void pop() {

        st.pop();
       
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {

        return st.top().second;
    }
};

