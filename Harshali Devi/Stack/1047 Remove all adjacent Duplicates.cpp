//Day 15
//Question 74
//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/


class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>dupli;

        for(auto alpha : s){
            if(dupli.empty()){
                dupli.push(alpha);
            }
            else if(dupli.top()==alpha){
                dupli.pop();
            }
            else{
                dupli.push(alpha);
            }
        }

        string output;
        while(!dupli.empty()){
            output+=dupli.top();
            dupli.pop();
        }

        reverse(output.begin(),output.end());

        return output;
    }
};

