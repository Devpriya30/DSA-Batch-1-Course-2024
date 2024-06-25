// Input: s = "deeedbbcccbdaa", k = 3
// Output: "aa"
// Explanation: 
// First delete "eee" and "ccc", get "ddbbbdaa"
// Then delete "bbb", get "dddaa"
// Finally delete "ddd", get "aa"
class Solution {
public:
    stack<pair<char,int>>st;
    void remove(int k){
        while(k!=0){
            st.pop();
            k--;
        }
    }
    string removeDuplicates(string s, int k) {
        
        int curr=1;
        for(int i=0;i<s.size();i++){
            if(!st.empty()){
                if(s[i]==st.top().first && st.top().second<k-1){
                    st.push({s[i],st.top().second+1});
                }
                else if(s[i]==st.top().first && st.top().second==k-1){
                    remove(k-1);
                }
                else{
                    st.push({s[i],1});
                }
            }
            else{
                st.push({s[i],1});
            }
        }
        string res="";
        while(!st.empty()){
            res+=st.top().first;

            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
