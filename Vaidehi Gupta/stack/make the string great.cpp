class Solution {
public:
    string makeGood(string s) {
      stack<int>st;
      string str;
      for(int i=0;i<s.size();i++){
             if(!st.empty() && ((int)st.top()+32==s[i]||(int)st.top()-32==s[i]))
            {
                st.pop();
            }
            else
            st.push(s[i]);
      }  
      while(!st.empty()){
        str+=st.top();
        st.pop();
      }
      reverse(str.begin(),str.end());
      return str;
    }
};
Time Complexity:O(N)
Space Complexity:O(n)
