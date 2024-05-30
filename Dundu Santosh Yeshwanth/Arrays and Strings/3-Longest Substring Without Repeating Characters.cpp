class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int n = s.size();
        int left = 0;
        int maxlength = 0;
        for(int right = 0; right<n;right++){
            if(mp.find(s[right])!=mp.end() && mp[s[right]]>=left){
                left = mp[s[right]]+1;
            }
            mp[s[right]] = right;
            maxlength = max(maxlength,right-left+1);
        }
        return maxlength;
    }
};

//Time complexity - O(N)
//Space complexity - O(N)
