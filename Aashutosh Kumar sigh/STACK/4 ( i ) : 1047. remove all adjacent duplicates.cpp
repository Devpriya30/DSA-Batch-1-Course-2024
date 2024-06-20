// using stack data struture

class Solution {
public:
    string removeDuplicates(string s) {
        stack <char> v;
        for(int i=0;i<s.size();i++){
            if(v.empty())
            v.push(s[i]);
            else if(s[i]==v.top())
            v.pop();
            else
            v.push(s[i]);
        }
        string ans="";
        while(!v.empty()){
            ans=v.top()+ans;
            v.pop();
        }
        return ans;
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(n)
