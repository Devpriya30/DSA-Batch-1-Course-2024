class Solution {
public:
    bool isValid(string s) {
        stack<char> braces;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
                braces.push(')');
            else if(s[i]=='[')
                braces.push(']');
            else if(s[i]=='{')
                braces.push('}');
            else
            {
                if(braces.empty() || braces.top()!=s[i])
                    return false;
                braces.pop();
            }
        }
        return braces.empty();
    }
};

Time Complexity : O(n)
Space Complexity : O(n)
