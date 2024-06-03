class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        char ans[101];
        string str;
        for(int i=0;i<s.length();i++){
            ans[indices[i]]=s[i];
        }
        for(int i=0;i<s.length();i++){
            str.push_back(ans[i]);
        }
        return str;

    }
};
