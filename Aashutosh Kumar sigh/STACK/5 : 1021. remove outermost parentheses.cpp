class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        for(int i=0;i<s.size();){
            if( s[i]=='(' && count==0){
                s.erase(s.begin()+i);
                count++;
            }
            if(s[i]==')' && count==1){
                s.erase(s.begin()+i);
                count--;
            }
            else if(s[i]=='('){
                count++;
                i++;
            }
            else{
                count--;
                i++;
            }
        }
        return s;
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(1)
