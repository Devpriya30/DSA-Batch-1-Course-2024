class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<int>a(128,0);int len=0;
       for(int i=0,j=0;i<s.size();i++)
       {
        j=max(j,a[(int)s[i]]);
        a[(int)s[i]]=i+1;
        len=max(len,i-j+1);
       } 
       return len;
    }
};

time complexity:O(n)
space complexity:O(n)
