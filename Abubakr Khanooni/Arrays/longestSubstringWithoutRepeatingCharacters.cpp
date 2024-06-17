class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mp(256, -1); 
        int i = 0, j = 0;
        int maxi = 0;

        while (i < s.size()) {
            if (mp[s[i]] >= j) {
                j = mp[s[i]] + 1;
            }
            mp[s[i]] = i;
            maxi = max(maxi, i - j + 1);
            i++;
        }

        return maxi;
    }
};
