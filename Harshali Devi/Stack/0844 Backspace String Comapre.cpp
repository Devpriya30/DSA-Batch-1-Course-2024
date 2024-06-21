//Day 15
//Question 76
//https://leetcode.com/problems/backspace-string-compare/description/


class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<char>st;
        stack<char>st2;
        
        for(int i=0;i<s.size();i++){
            if (s[i] == '#') {
                if (!st.empty()) {
                    st.pop();
                }
            }
            else{
                st.push(s[i]);
            }
        }

        for(int i=0;i<t.size();i++){
            if (t[i] == '#') {
                if (!st2.empty()) {
                    st2.pop();
                }
            }
            else{
                st2.push(t[i]);
            }
        }

        string output2;
        string output1;
        while(!st2.empty()){
            output2+=st2.top();
            st2.pop();

        }

        while(!st.empty()){
            output1+=st.top();
            st.pop();

        }

        if(output1==output2){
            return true;
        }
        else{
            return false;
        }

    }
};



//Time Complexity -> O(n + m)
