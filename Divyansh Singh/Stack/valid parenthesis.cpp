class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
               st.push(')');
            }
            else if(s[i]=='{'){
               st.push('}');
            }
            else if(s[i]=='['){
               st.push(']');
            }
            else{
                if(st.empty()==true || st.top()!=s[i]){
                    return false;
                }
                st.pop();
            }
        }

        if(st.empty()){
            return true;
        }
        return false;
    }
};
