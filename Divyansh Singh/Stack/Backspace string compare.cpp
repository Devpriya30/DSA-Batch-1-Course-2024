class Solution {
private:
string mapping(string str){
    stack<char>st;
    int i=0;
    string ans="";
    while(i<str.length()){
        if(st.empty()){
            if(str[i]=='#'){
                i++;
            }
            else{
                st.push(str[i]);
                i++;
            }
        }
        else{
            if(str[i]=='#'){
                st.pop();
            }
            else{
                st.push(str[i]);
            }
            i++;
        }
    }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;

}
public:
    bool backspaceCompare(string s, string t) {
        s=mapping(s);
        t=mapping(t);
        if(s.length()!=t.length()){
            return false;
        }        
        else{
            int i=0;
            while(i<s.length()){
                if(s[i]!=t[i]){
                    return false;
                }
                i++;
            }
        }
        return true;

    }
};
