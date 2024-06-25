class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(st.empty()){
                st.push(s[i]);
            }

            else{
                char c=st.top();
                if(s[i]==c){
                    st.push(s[i]);
                }
                else if(s[i]!=c){
                    c=tolower(c);
                    char t=tolower(s[i]);
                    if(c==t){
                        st.pop();
                    }
                    else{
                        st.push(s[i]);
                    }
                }
            }
        }
        string ans="";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
