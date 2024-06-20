class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i=0;
        stack<int> ans;
        for(int j=0;j<pushed.size();j++){
            ans.push(pushed[j]);
            while(!ans.empty() && ans.top()==popped[i]){
                ans.pop();
                i++;
            }
        }
        return ans.empty();
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(n)
