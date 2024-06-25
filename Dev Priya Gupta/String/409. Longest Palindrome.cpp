class Solution {
public:
    int longestPalindrome(string s) {
        int res=0,a=0;
        vector<int> ch(128,0);
        for(int i=0;i<s.length();i++)
            ch[s[i]]++;
        for(int i=0;i<128;i++)
        {
            res+=(ch[i]/2)*2;
            if(a==0)
                a=ch[i]%2;
        }
        return res+a;
    }
};

Time Complexity : O(n)
Space Complexity : O(1)
