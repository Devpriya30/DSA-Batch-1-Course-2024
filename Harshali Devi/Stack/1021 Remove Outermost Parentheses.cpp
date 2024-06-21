//Day 15
//Question 73
//https://leetcode.com/problems/remove-outermost-parentheses/description/

//Method 1 -> Using Stack

class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        stack<char>hashtable;

        for(auto val : s){
            if(val=='('){
                if(hashtable.empty()){
                    hashtable.push(val);
                }
                else{
                    hashtable.push(val);
                    ans+=val;
                }
            }
            else{
                hashtable.pop();
                if(!hashtable.empty()){
                    ans+=val;
                }
            }
        }

        return ans;
    }
};

//Method 2 -> Counter Method without stack

class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;

        string output;

        for(auto brac : s){
            if(brac=='('){
                if(count!=0){
                    output+=brac;
                }
                count++;
            }
            else{
                count--;
                if(count!=0){
                    output+=brac;
                }
            }
        }

        return output;

    }
};

