class Solution {
public:
    string makeGood(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            if(!ans.empty() && ((s[i]+32)==ans.back() || (s[i]-32)==ans.back()))
            ans.pop_back();
            else
            ans.push_back(s[i]);
        }
        return ans;
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(n)
