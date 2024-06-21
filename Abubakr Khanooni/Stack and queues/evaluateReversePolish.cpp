class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s1;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+")
            {
                int a=s1.top();
                s1.pop();
                int b=s1.top();
                s1.pop();
                s1.push(a+b);
            }
            else if(tokens[i]=="-")
            {
                int a=s1.top();
                s1.pop();
                int b=s1.top();
                s1.pop();
                s1.push(b-a);
            }
            else if(tokens[i]=="*")
            {
                int a=s1.top();
                s1.pop();
                int b=s1.top();
                s1.pop();
                s1.push(a*b);
            }
            else if(tokens[i]=="/")
            {
                int a=s1.top();
                s1.pop();
                int b=s1.top();
                s1.pop();
                s1.push(b/a);
            }
            else{
                int a=stoi(tokens[i]);
                s1.push(a);
            }
        }
        return s1.top();
        
    }
};
