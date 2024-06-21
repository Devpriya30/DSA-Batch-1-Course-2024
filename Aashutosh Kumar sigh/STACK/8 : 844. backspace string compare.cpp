class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ans1="";
        for(int i=0;i<s.size();i++){
            if(!ans1.empty() && s[i]=='#')
            ans1.pop_back();
            if(ans1.empty() && s[i]!='#')
            ans1.push_back(s[i]);
            else if(s[i]!='#')
            ans1.push_back(s[i]);
        }
        string ans2="";
        for(int i=0;i<t.size();i++){
            if(!ans2.empty() && t[i]=='#')
            ans2.pop_back();
            if(ans2.empty() && t[i]!='#')
            ans2.push_back(t[i]);
            else if(t[i]!='#')
            ans2.push_back(t[i]);
        }
        return ans1==ans2 ? 1 : 0;
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(n)
