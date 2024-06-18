class Solution {
public:
    string removeDuplicates(string s) {
        string res="";
        stack<char> stack;
        for(int i=0;i<s.length();i++)
        {
            if(!stack.empty() && stack.top()==s[i])
                stack.pop();
            else
                stack.push(s[i]);
        }
        while(!stack.empty())
        {
            res=stack.top()+res;
            stack.pop();
        }
        return res;
    }
};

Time Complexity : O(n)
Space Complexity : O(n)
