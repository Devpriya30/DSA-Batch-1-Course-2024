class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto it : s) {
            if(it == '(' || it == '[' || it == '{') {
                st.push(it);
            } else {
                if(st.empty()) {
                    return false;
                }
                char top = st.top();
                if((it == ')' && top != '(') ||
                   (it == ']' && top != '[') ||
                   (it == '}' && top != '{')) {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};
