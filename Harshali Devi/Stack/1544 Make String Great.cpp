//Day 15
//Question 75
https://leetcode.com/problems/make-the-string-great/


class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        string output;

        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(abs(int(st.top())-int(s[i]))==32){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }

        while(!st.empty()){
            output+=st.top();
            st.pop();
        }

        reverse(output.begin(),output.end());

        return output;
    }
};

