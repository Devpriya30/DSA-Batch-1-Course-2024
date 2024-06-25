class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>ans(26);
        for(int i=0;i<s.size();i++){
            ans[s[i]-97]++;  //97 is ascii value of 'a'
        }
        for(int i=0;i<s.size();i++){
            if(ans[s[i]-97]==1){
                return i;
            }
        }
        return -1;
    }
};

TIME COMPLEXITY : O(n)
SPACEE COMPLEXITY : O(26) = O(1)
