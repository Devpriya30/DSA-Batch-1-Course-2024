//Day 1
//Question 11
//https://leetcode.com/problems/shuffle-string/description/

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<char>output(indices.size());
        for (int i=0;i<indices.size();i++){
            output[indices[i]] = s[i];
        }
        return string(output.begin(),output.end());
    }
};

//Time Complexity -> O(n)
