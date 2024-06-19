class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                st.pop();
            }
            else if(operations[i]=="D"){
                int d=st.top()*2;
                st.push(d);
            }
            else if(operations[i]=="+"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(b);
                st.push(a);
                st.push(a+b);
            }
            else{
                int push=stoi(operations[i]);
                st.push(push);
            }
        }
        int sum=0;
        while(!st.empty()){
            sum=sum+st.top();
            st.pop();
        }
        return sum;
    }
};
