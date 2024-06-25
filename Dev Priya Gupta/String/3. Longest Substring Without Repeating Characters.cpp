class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //use sliding window concept
        vector<int> ind(256,0); //ascii code for all character
        int len=0;
        for(int i=0,j=0;i<s.length();i++)
        {
            j=max(j,ind[s[i]]);
            ind[s[i]]=i+1;
            len=max(len,i-j+1);
        }
        return len;
    }
};

Time Complexity : O(n)
Space Complexity : O(1)
