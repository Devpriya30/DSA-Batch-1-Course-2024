//Day 13
//Question 68
//https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        
        stack<char>st;

        for(char c: s){
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty()) {
                    return false;
                }
                if (c == ')' && st.top() != '(') {
                    return false;
                } else if (c == '}' && st.top() != '{') {
                    return false;
                } else if (c == ']' && st.top() != '[') {
                    return false;
                }
                st.pop(); // Pop the stack when a match is found
            }
        }

        return st.empty(); // Ensure the stack is empty at the end
    }
};

//Time Complexity -> O(n)5

