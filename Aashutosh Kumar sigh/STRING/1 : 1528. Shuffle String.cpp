class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans(s.size(),'a');
        for(int i=0;i<s.size();i++){
            ans[indices[i]]=s[i];
        }
        return ans;
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(n)
  
