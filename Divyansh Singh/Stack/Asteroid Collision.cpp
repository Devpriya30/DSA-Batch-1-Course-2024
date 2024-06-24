class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>ans;
        stack<int>st;
        for(int i:asteroids){
            if(i>0){
                st.push(i);
            }
            else{
                while(!st.empty() && st.top()>0 && st.top()<abs(i)){
                    st.pop();
                }
                if(st.empty()){
                    st.push(i);
                    continue;
                }
                if(st.top()<0){
                    st.push(i);
                    continue;
                }
                if(st.top()==abs(i)){
                    st.pop();
                    continue;
                }
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
