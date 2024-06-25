class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>ans;
        int num1,num2;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"){
                num1=ans.top();
                ans.pop();
                num2=ans.top();
                ans.pop();
                ans.push(num2+num1);
            }
            else if(tokens[i]=="*"){
                num1=ans.top();
                ans.pop();
                num2=ans.top();
                ans.pop();
                ans.push(num2*num1);
            }
            else if(tokens[i]=="/"){
                num1=ans.top();
                ans.pop();
                num2=ans.top();
                ans.pop();
                ans.push(num2/num1);
            }
            else if(tokens[i]=="-"){
                num1=ans.top();
                ans.pop();
                num2=ans.top();
                ans.pop();
                ans.push(num2-num1);
            }
            else{
                ans.push(stoi(tokens[i]));
            }
        }
        return ans.top();
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(n)
