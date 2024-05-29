class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string copy=s;
        int i=0;
        for(auto it:indices){
            copy[it]=s[i];
            i++;
        }
        return copy;
    }
};