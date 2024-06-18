class Solution {
public:
    bool isValid(string s) {
        stack<char> v;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
                v.push(')');
            else if(s[i]=='[')
                v.push(']');
            else if(s[i]=='{')
                v.push('}');
            else
            {
                if(v.empty() || v.top()!=s[i])
                    return false;
                v.pop();
            }
        }
        return v.empty();
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(n)
