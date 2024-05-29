class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string res(s.length(),' ');
        for(int i=0;i<s.length();i++)
            res[indices[i]]=s[i];
        return res;
    }
};

Time Complexity : O(n)
Space Complexity : O(1) // doubt
